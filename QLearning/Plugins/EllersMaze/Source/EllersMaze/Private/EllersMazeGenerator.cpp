// Fill out your copyright notice in the Description page of Project Settings.


#include "EllersMazeGenerator.h"
#include "ProceduralMeshComponent.h"

TArray<FUCellArray> UEllersMazeGenerator::Generate(int width, int height)
{
	TArray<FUCellArray> maze;
	FUCellArray row;

	for (int i = 0; i < width; ++i)
	{
		UCell* cell = NewObject<UCell>();
		cell->SetGroup(i);
		cell->SetTopWall(true);
		if (i == 0)
		{
			cell->SetLeftWall(true);
		}
		row.InnerArray.Add(cell);
	}

	for (int y = 0; y < height; ++y)
	{
		FUCellArray newRow;
		if (y == height - 1)
		{
			for (auto& cell : row.InnerArray)
			{
				cell->SetBottomWall(true);
			}
			for (int i = 0; i < row.InnerArray.Num() - 1; ++i)
			{
				auto hasRightWall = row.InnerArray[i]->Group() != row.InnerArray[i + 1]->Group();
				row.InnerArray[i]->SetRightWall(hasRightWall);
			}
			row.InnerArray.Last()->SetRightWall(true);
		}
		else
		{
			for (int i = 0; i < row.InnerArray.Num() - 1; ++i)
			{
				if (row.InnerArray[i]->Group() == row.InnerArray[i + 1]->Group())
				{
					row.InnerArray[i]->SetRightWall(true);
				}
			}

			CreateRightWall(row);
			CreateBottomWall(row);
			newRow = PrepareNextRow(row, y, width);
		}
		row.InnerArray[0]->SetLeftWall(true);
		maze.Add(row);
		row = newRow;
	}

	return maze;
}

TArray<FUCellArray> UEllersMazeGenerator::GenerateMock()
{
	TArray<FUCellArray> maze;
	FUCellArray row;

	UCell* cell1 = NewObject<UCell>();
	cell1->SetRightWall(true);
	cell1->SetBottomWall(false);
	cell1->SetTopWall(true);
	cell1->SetLeftWall(true);
	cell1->SetGroup(0);
	row.InnerArray.Add(cell1);

	UCell* cell2 = NewObject<UCell>();
	cell2->SetRightWall(true);
	cell2->SetBottomWall(false);
	cell2->SetTopWall(true);
	cell2->SetLeftWall(false);
	cell2->SetGroup(1);
	row.InnerArray.Add(cell2);

	UCell* cell3 = NewObject<UCell>();
	cell3->SetRightWall(true);
	cell3->SetBottomWall(false);
	cell3->SetTopWall(true);
	cell3->SetLeftWall(false);
	cell3->SetGroup(2);
	row.InnerArray.Add(cell3);

	FUCellArray row2;

	UCell* cell4 = NewObject<UCell>();
	cell4->SetRightWall(true);
	cell4->SetBottomWall(false);
	cell4->SetTopWall(false);
	cell4->SetLeftWall(true);
	cell4->SetGroup(0);
	row2.InnerArray.Add(cell4);

	UCell* cell5 = NewObject<UCell>();
	cell5->SetRightWall(true);
	cell5->SetBottomWall(false);
	cell5->SetTopWall(false);
	cell5->SetLeftWall(false);
	cell5->SetGroup(1);
	row2.InnerArray.Add(cell5);

	UCell* cell6 = NewObject<UCell>();
	cell6->SetRightWall(true);
	cell6->SetBottomWall(false);
	cell6->SetTopWall(false);
	cell6->SetLeftWall(false);
	cell6->SetGroup(2);
	row2.InnerArray.Add(cell6);

	FUCellArray row3;

	UCell* cell7 = NewObject<UCell>();
	cell7->SetRightWall(true);
	cell7->SetBottomWall(true);
	cell7->SetTopWall(false);
	cell7->SetLeftWall(true);
	cell7->SetGroup(0);
	row3.InnerArray.Add(cell7);

	UCell* cell8 = NewObject<UCell>();
	cell8->SetRightWall(true);
	cell8->SetBottomWall(true);
	cell8->SetTopWall(false);
	cell8->SetLeftWall(false);
	cell8->SetGroup(1);
	row3.InnerArray.Add(cell8);

	UCell* cell9 = NewObject<UCell>();
	cell9->SetRightWall(true);
	cell9->SetBottomWall(true);
	cell9->SetTopWall(false);
	cell9->SetLeftWall(false);
	cell9->SetGroup(2);
	row3.InnerArray.Add(cell9);


	maze.Add(row);
	maze.Add(row2);
	maze.Add(row3);

	return maze;
}

UProceduralMeshComponent* UEllersMazeGenerator::ToProceduralMesh(AActor* parent, const TArray<FUCellArray>& maze)
{
	auto mesh = NewObject<UProceduralMeshComponent>(parent);

	mesh->RegisterComponent();
	parent->AddInstanceComponent(mesh);

	TArray<FVector> vertices;
	TArray<int32> triangles;

	int32 height = maze.Num();
	int32 width = maze[0].InnerArray.Num();

	int32 k = 0;
	float cellSize = 1000.0f;

	for (int32 i = 0; i < maze.Num(); ++i)
	{
		for (int32 j = 0; j < maze[i].InnerArray.Num(); ++j)
		{
			auto& cell = maze[i].InnerArray[j];
			for (auto& vertex : cell->GetVertices())
			{
				auto position = FVector(
					vertex.X + j,
					vertex.Y + i,
					vertex.Z
				);
				vertices.Add(position * cellSize);
				// 				vertices.Add(FVector(
				// 					vertex.X - i,
				// 					vertex.Y + j,
				// 					vertex.Z
				// 				));
			}

			for (auto& index : cell->GetIndices())
			{
				triangles.Add(index + k);
			}
			k += cell->GetVertices().Num();
		}
	}

	mesh->CreateMeshSection(0, vertices, triangles, {}, {}, {}, {}, {}, {}, {}, true);

	return mesh;
}

TArray<int32> UEllersMazeGenerator::MazeToIntArray(const TArray<FUCellArray>& maze)
{
	int32 width = maze[0].InnerArray.Num() * 2;
	// NOTE : each cell is represented by 2x2 integers
	int32 length = maze.Num() * 2 * maze[0].InnerArray.Num() * 2;
	TArray<int32> result;
	result.SetNum(length);

	// for (int i = maze.Num() - 1; i >= 0; --i)
	for (int32 i = 0; i < maze.Num(); ++i)
	{
		for (int32 j = 0; j < maze[i].InnerArray.Num(); ++j)
		{
			auto& cell = maze[i].InnerArray[j];

			int32 cellValue = 0;

			// NOTE : a cell is configured by 4 part
			// left top : 0 (always 0)
			// right top : 0 or 1 (if there is a right wall)
			// left bottom : 0 or 1 (if there is a bottom wall)
			// right bottom : 0 or 1 (if there is a right wall or a bottom wall)
			int32 leftTopIndex = (i * 2 + 1) * width + j * 2;
			int32 rightTopIndex = leftTopIndex + 1;
			int32 leftBottomIndex = leftTopIndex - width;
			int32 rightBottomIndex = leftBottomIndex + 1;

			result[leftTopIndex] = 0;
			result[rightTopIndex] = cell->RightWall() ? 1 : 0;
			result[leftBottomIndex] = cell->BottomWall() ? 1 : 0;
			result[rightBottomIndex] = result[rightTopIndex] | result[leftBottomIndex];
		}
	}

	return result;
}

void UEllersMazeGenerator::CreateRightWall(FUCellArray& cells)
{
	for (int i = 0; i < cells.InnerArray.Num() - 1; ++i)
	{
		auto& cell = cells.InnerArray[i];
		auto& nextCell = cells.InnerArray[i + 1];
		if (CreateWall())
		{
			cell->SetRightWall(true);
		}
		else if (cell->Group() == nextCell->Group())
		{
			cell->SetRightWall(true);
		}
		else
		{
			nextCell->SetGroup(cell->Group());
		}
	}

	auto& lastCell = cells.InnerArray.Last();
	lastCell->SetRightWall(true);
}

void UEllersMazeGenerator::CreateBottomWall(FUCellArray& cells)
{
	auto groupedCell = TMap<int, FUCellArray>();
	for (auto& cell : cells.InnerArray)
	{
		if (!groupedCell.Contains(cell->Group()))
		{
			groupedCell.Add(cell->Group(), FUCellArray());
		}
		groupedCell[cell->Group()].InnerArray.Push(cell);
	}

	for (auto& group : groupedCell)
	{
		auto indices = TArray<int>();

		if (group.Value.InnerArray.Num() == 1)
		{
			indices.Add(0);
		}
		else
		{
			int downPathAmount = FMath::RandRange(1, group.Value.InnerArray.Num());

			for (int i = 0; i < downPathAmount; ++i)
			{
				int index;
				do
				{
					index = FMath::RandRange(0, group.Value.InnerArray.Num() - 1);
				} while (indices.Contains(index));

				indices.Add(index);
			}
		}

		for (int i = 0; i < group.Value.InnerArray.Num(); ++i)
		{
			auto makeWall = !indices.Contains(i);
			group.Value.InnerArray[i]->SetBottomWall(makeWall);
		}
	}
}

FUCellArray UEllersMazeGenerator::PrepareNextRow(FUCellArray& cells, int rowNumber, int width)
{
	FUCellArray newRow;

	for (int i = 0; i < cells.InnerArray.Num(); ++i)
	{
		auto cell = cells.InnerArray[i];
		auto belowCell = cell->Duplicate();
		belowCell->SetTopWall(false);
		belowCell->SetLeftWall(false);
		belowCell->SetRightWall(false);
		if (belowCell->BottomWall())
		{
			belowCell->SetGroup(rowNumber * width + i);
			belowCell->SetBottomWall(false);
		}
		newRow.InnerArray.Add(belowCell);
	}
	return newRow;
}

bool UEllersMazeGenerator::CreateWall()
{
	int randValue = FMath::RandRange(0, MaxBias);
	return randValue > Bias;
}
