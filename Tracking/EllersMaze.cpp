// EllersMaze.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "BaseApp.h"
#include "Maze.h"
#include "GeometryGenerator.h"

class EllersMazeApp : public BaseApp
{
public:
	EllersMazeApp(HINSTANCE hInstance);
	EllersMazeApp(const EllersMazeApp& rhs) = delete;
	EllersMazeApp& operator=(const EllersMazeApp& rhs) = delete;
	~EllersMazeApp();

private:
	void BuildRootSignature();
	void BuildShaderAndInputLayout();
	void BuildMaze();
	void BuildRenderItems();
	void BuildFrameResources();
	void BuildPSOs();

private:
	virtual void Build() override;
};

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE prevInstance,
	PSTR cmdLine, int showCmd)
{
#if defined(DEBUG) | defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	try
	{
		EllersMazeApp theApp(hInstance);
		if (!theApp.Initialize())
			return 0;
		return theApp.Run();
	}
	catch (DxException& e)
	{
		MessageBox(nullptr, e.ToString().c_str(), L"HR Failed", MB_OK);
		return 0;
	}
}

EllersMazeApp::EllersMazeApp(HINSTANCE hInstance)
	:BaseApp(hInstance)
{
}

EllersMazeApp::~EllersMazeApp()
{
	if (md3dDevice != nullptr)
		FlushCommandQueue();
}

void EllersMazeApp::BuildRootSignature()
{
	CD3DX12_ROOT_PARAMETER slotRootParameter[2];
	slotRootParameter[0].InitAsConstantBufferView(0);
	slotRootParameter[1].InitAsConstantBufferView(1);

	CD3DX12_ROOT_SIGNATURE_DESC rootSigDesc(2, slotRootParameter,
		0, nullptr,
		D3D12_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT);

	ComPtr<ID3DBlob> serializedRootSig = nullptr;
	ComPtr<ID3DBlob> errorBlob = nullptr;
	HRESULT hr = D3D12SerializeRootSignature(&rootSigDesc, D3D_ROOT_SIGNATURE_VERSION_1,
		serializedRootSig.GetAddressOf(), errorBlob.GetAddressOf());

	if (errorBlob != nullptr)
	{
		OutputDebugStringA((char*)errorBlob->GetBufferPointer());
	}
	ThrowIfFailed(hr);

	ThrowIfFailed(md3dDevice->CreateRootSignature(
		0,
		serializedRootSig->GetBufferPointer(),
		serializedRootSig->GetBufferSize(),
		IID_PPV_ARGS(mRootSignature.GetAddressOf())));
}

void EllersMazeApp::BuildShaderAndInputLayout()
{
	mShaders["standardVS"] = D3DUtil::CompileShader(L"Shaders\\Default.hlsl", nullptr, "VS", "vs_5_1");
	mShaders["opaquePS"] = D3DUtil::CompileShader(L"Shaders\\Default.hlsl", nullptr, "PS", "ps_5_1");

	mStdInputLayout =
	{
		{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 },
	};
}

void EllersMazeApp::BuildMaze()
{
	EllersAlgorithm ellers;
	auto maze = ellers.Generate(5, 3);

	vector<Vertex> vertices;
	vector<uint16_t> indices;
	SubmeshGeometry mazeSubmesh;
	mazeSubmesh.IndexCount = 0;
	mazeSubmesh.StartIndexLocation = 0;
	mazeSubmesh.BaseVertexLocation = 0;

	UINT k = 0;
	float xOffset = -0.5f;
	float zOffset = -0.5f;

	for (int i = 0; i < maze.size(); ++i)
	{
		for (int j = 0; j < maze[i].size(); ++j)
		{
			float x = xOffset + j;
			float z = zOffset + i;

			auto cellVertices = maze[i][j].GetVertices();
			for (auto& v : cellVertices)
			{
				v.Pos.x += x;
				v.Pos.z += z;

				vertices.push_back(v);
			}

			auto cellIndices = maze[i][j].GetIndices();
			for (auto& index : cellIndices)
			{
				indices.push_back(index + k);
			}
			k += cellVertices.size();
		}
	}

	mazeSubmesh.IndexCount = (UINT)indices.size();

	auto geo = make_unique<MeshGeometry>();
	geo->Name = "mazeGeo";

	const UINT vbByteSize = (UINT)vertices.size() * sizeof(Vertex);
	const UINT ibByteSize = (UINT)indices.size() * sizeof(uint16_t);

	ThrowIfFailed(D3DCreateBlob(vbByteSize, &geo->VertexBufferCPU));
	CopyMemory(geo->VertexBufferCPU->GetBufferPointer(), vertices.data(), vbByteSize);

	ThrowIfFailed(D3DCreateBlob(ibByteSize, &geo->IndexBufferCPU));
	CopyMemory(geo->IndexBufferCPU->GetBufferPointer(), indices.data(), ibByteSize);

	geo->VertexBufferGPU = D3DUtil::CreateDefaultBuffer(md3dDevice.Get(),
		mCommandList.Get(), vertices.data(), vbByteSize, geo->VertexBufferUploader);

	geo->IndexBufferGPU = D3DUtil::CreateDefaultBuffer(md3dDevice.Get(),
		mCommandList.Get(), indices.data(), ibByteSize, geo->IndexBufferUploader);

	geo->VertexByteStride = sizeof(Vertex);
	geo->VertexBufferByteSize = vbByteSize;
	geo->IndexFormat = DXGI_FORMAT_R16_UINT;
	geo->IndexBufferByteSize = ibByteSize;

	geo->DrawArgs["maze"] = mazeSubmesh;

	mGeometries[geo->Name] = move(geo);
}

void EllersMazeApp::BuildRenderItems()
{
	auto mazeRitem = make_unique<RenderItem>();
	mazeRitem->World = MathHelper::Identity4x4();
	mazeRitem->TexTransform = MathHelper::Identity4x4();
	mazeRitem->ObjCBIndex = 0;
	mazeRitem->Mat = nullptr;
	mazeRitem->Geo = mGeometries["mazeGeo"].get();
	mazeRitem->PrimitiveType = D3D10_PRIMITIVE_TOPOLOGY_TRIANGLELIST;
	mazeRitem->IndexCount = mazeRitem->Geo->DrawArgs["maze"].IndexCount;
	mazeRitem->StartIndexLocation = mazeRitem->Geo->DrawArgs["maze"].StartIndexLocation;
	mazeRitem->BaseVertexLocation = mazeRitem->Geo->DrawArgs["maze"].BaseVertexLocation;

	mRitemLayer[(int)RenderLayer::Opaque].push_back(mazeRitem.get());
	mAllRitems.push_back(move(mazeRitem));
}

void EllersMazeApp::BuildFrameResources()
{
	for (int i = 0; i < gNumFrameResources; ++i)
	{
		mFrameResources.push_back(make_unique<FrameResource>(md3dDevice.Get(),
			1, (UINT)mAllRitems.size(), 1));
	}
}

void EllersMazeApp::BuildPSOs()
{
	D3D12_GRAPHICS_PIPELINE_STATE_DESC opaquePsoDesc;

	ZeroMemory(&opaquePsoDesc, sizeof(D3D12_GRAPHICS_PIPELINE_STATE_DESC));
	opaquePsoDesc.InputLayout = { mStdInputLayout.data(), (UINT)mStdInputLayout.size() };
	opaquePsoDesc.pRootSignature = mRootSignature.Get();
	opaquePsoDesc.VS =
	{
		reinterpret_cast<BYTE*>(mShaders["standardVS"]->GetBufferPointer()),
		mShaders["standardVS"]->GetBufferSize()
	};
	opaquePsoDesc.PS =
	{
		reinterpret_cast<BYTE*>(mShaders["opaquePS"]->GetBufferPointer()),
		mShaders["opaquePS"]->GetBufferSize()
	};
	opaquePsoDesc.RasterizerState = CD3DX12_RASTERIZER_DESC(D3D12_DEFAULT);

	opaquePsoDesc.RasterizerState.FillMode = D3D12_FILL_MODE_WIREFRAME;
	opaquePsoDesc.RasterizerState.CullMode = D3D12_CULL_MODE_NONE;

	opaquePsoDesc.BlendState = CD3DX12_BLEND_DESC(D3D12_DEFAULT);
	opaquePsoDesc.DepthStencilState = CD3DX12_DEPTH_STENCIL_DESC(D3D12_DEFAULT);
	opaquePsoDesc.SampleMask = UINT_MAX;
	opaquePsoDesc.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
	opaquePsoDesc.NumRenderTargets = 1;
	opaquePsoDesc.RTVFormats[0] = mBackBufferFormat;
	opaquePsoDesc.SampleDesc.Count = m4xMsaaState ? 4 : 1;
	opaquePsoDesc.SampleDesc.Quality = m4xMsaaState ? (m4xMsaaQuality - 1) : 0;
	opaquePsoDesc.DSVFormat = mDepthStencilFormat;
	ThrowIfFailed(md3dDevice->CreateGraphicsPipelineState(&opaquePsoDesc, IID_PPV_ARGS(&mPSOs["opaque"])));
}

void EllersMazeApp::Build()
{
	BuildRootSignature();
	BuildShaderAndInputLayout();
	BuildMaze();
	BuildRenderItems();
	BuildFrameResources();
	BuildPSOs();
}
