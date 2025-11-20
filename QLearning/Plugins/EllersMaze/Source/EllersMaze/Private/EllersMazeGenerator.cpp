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
		maze.Add(row);
		row = newRow;
	}

	return maze;
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
				} while (!indices.Contains(index));

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
