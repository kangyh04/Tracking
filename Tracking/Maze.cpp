#include "Maze.h"
#include <random>
#include <map>

vector<vector<Cell>> EllersAlgorithm::Generate(int width, int height)
{
	auto maze = vector<vector<Cell>>();
	auto row = vector<Cell>();

	for (int i = 0; i < width; ++i)
	{
		auto cell = Cell();
		cell.SetGroup(i);
		row.push_back(cell);
	}

	for (int x = 0; x < height; ++x)
	{
		auto newRow = vector<Cell>();
		if (x == height - 1)
		{
			for (auto cell = row.begin(); cell != row.end(); ++cell)
			{
				cell->SetBottomWall(true);
			}

			for (int i = 0; i < row.size() - 1; ++i)
			{
				auto hasRightWall = row[i].Group() != row[i + 1].Group();
				row[i].SetRightWall(hasRightWall);
			}

			row[row.size() - 1].SetRightWall(true);
		}
		else
		{
			for (int i = 0; i < row.size() - 1; ++i)
			{
				if (row[i].Group() == row[i + 1].Group())
				{
					row[i].SetRightWall(true);
				}
			}

			CreateRightWall(row);
			CreateBottomWall(row);
			newRow = PrepareNextRow(row, x, width);
		}
		maze.push_back(row);
		row = newRow;
	}

	return maze;
}

void EllersAlgorithm::CreateRightWall(vector<Cell>& cells)
{
	for (int i = 0; i < cells.size() - 1; ++i)
	{
		auto& cell = cells[i];
		auto& nextCell = cells[i + 1];
		if (CreateWall())
		{
			cell.SetRightWall(true);
		}
		else if (cell.Group() == nextCell.Group())
		{
			cell.SetRightWall(true);
		}
		else
		{
			nextCell.SetGroup(cell.Group());
		}
	}

	auto& lastCell = cells[cells.size() - 1];
	lastCell.SetRightWall(true);
}

void EllersAlgorithm::CreateBottomWall(vector<Cell>& cells)
{
	auto groupedCell = map<int, vector<Cell*>>();
	for (int i = 0; i < cells.size(); ++i)
	{
		auto& cell = cells[i];
		groupedCell[cell.Group()].push_back(&cell);
	}

	random_device rd;
	mt19937 gen(rd());

	for (auto group = groupedCell.begin(); group != groupedCell.end(); ++group)
	{
		auto indices = vector<int>();
		if (group->second.size() == 1)
		{
			indices.push_back(0);
		}
		else
		{
			uniform_int_distribution<int> dis(1, group->second.size());
			uniform_int_distribution<int> indexDis(0, group->second.size() - 1);
			int downPathAmount = dis(gen);

			for (int i = 0; i < downPathAmount; ++i)
			{
				int index;
				do
				{
					index = indexDis(gen);
				} while (find(indices.begin(), indices.end(), index) != indices.end());

				indices.push_back(index);
			}
		}

		for (int i = 0; i < group->second.size(); ++i)
		{
			auto makeWall = find(indices.begin(), indices.end(), i) == indices.end();
			group->second[i]->SetBottomWall(makeWall);
		}
	}
}

vector<Cell> EllersAlgorithm::PrepareNextRow(vector<Cell>& cells, int rowNumber, int width)
{
	auto newRow = vector<Cell>();

	for (int i = 0; i < cells.size(); ++i)
	{
		auto cell = cells[i];
		auto belowCell = Cell(cell);
		belowCell.SetRightWall(false);
		if (belowCell.BottomWall())
		{
			belowCell.SetGroup(rowNumber * width + i);
			belowCell.SetBottomWall(false);
		}
		newRow.push_back(belowCell);
	}
	return newRow;
}

bool EllersAlgorithm::CreateWall()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(0, MaxBias);

	return dis(gen) > Bias;
}