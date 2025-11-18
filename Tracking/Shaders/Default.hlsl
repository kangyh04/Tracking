cbuffer cbPerObject : register(b0)
{
    float4x4 gWorld;
};

cbuffer cbPass : register(b1)
{
    float4x4 gView;
    float4x4 gInvView;
    float4x4 gProj;
    float4x4 gInvProj;
    float4x4 gViewProj;
    float4x4 gInvViewProj;
    float3 gEyePosW;
    float pad0;
    float2 gRenderTargetSize;
    float2 gInvRenderTargetSize;
    float gNearZ;
    float gFarZ;
    float gTotalTime;
    float gDeltaTime;
    float4 gAmbientLight;
};

struct VertexIn
{
    float3 PosL : POSITION;
};

struct VertexOut
{
    float4 PosH : SV_POSITION;
};

VertexOut VS(VertexIn vin, uint instanceID : SV_InstanceID)
{
    VertexOut vout = (VertexOut) 0.0f;

    vout.PosH = mul(float4(vin.PosL, 1.0f), gViewProj);

    return vout;
}

float4 PS(VertexOut pin) : SV_Target
{
    return float4(1.0f, 1.0f, 1.0f, 1.0f);
}