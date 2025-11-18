#pragma once
#include <iostream>
#include <vector>
#include "FrameResource.h"

using namespace std;

class Cell
{
public:
	Cell() = default;
	Cell(const Cell& rhs)
	{
		hasRightWall = rhs.hasRightWall;
		hasBottomWall = rhs.hasBottomWall;
		group = rhs.group;
	}

	bool RightWall() { return hasRightWall; }
	bool BottomWall() { return hasBottomWall; }
	bool SetRightWall(bool hasWall)
	{
		hasRightWall = hasWall;
		return hasRightWall;
	}
	bool SetBottomWall(bool hasWall)
	{
		hasBottomWall = hasWall;
		return hasBottomWall;
	}
	int Group() { return group; }
	int SetGroup(int number)
	{
		group = number;
		return group;
	}
	vector<Vertex> GetVertices()
	{
		if (hasRightWall && hasBottomWall)
		{
			return {
				//12
				Vertex(0.45f, 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.45f, 1.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.45f, 0.0f, -0.45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.45f, 1.0f, -0.45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(-0.5f, 0.0f, -0.45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(-0.5f, 1.0f, -0.45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(-0.5f, 0.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(-0.5f, 1.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.5f, 0.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.5f, 1.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.5f, 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.5f, 1.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
			};
		}
		else if (hasRightWall)
		{
			return {
				//8
				Vertex(0.45f, 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.45f, 1.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.45f, 0.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.45f, 1.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.5f, 0.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.5f, 1.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.5f, 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.5f, 1.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
			};
		}
		else if (hasBottomWall)
		{
			return {
				// 8
				Vertex(0.5f, 0.0f, -0.45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.5f, 1.0f, -0.45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(-0.5f, 0.0f, -0.45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(-0.5f, 1.0f, -0.45f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(-0.5f, 0.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(-0.5f, 1.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.5f, 0.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
				Vertex(0.5f, 1.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f),
			};
		}
		return {};
	}

	vector<uint16_t> GetIndices()
	{
		if (hasRightWall && hasBottomWall)
		{
			return {
				0, 1, 2,
				2, 1, 3,

				2, 3, 4,
				4, 3, 5,

				4, 5, 6,
				6, 5, 7,

				6, 7, 8,
				8, 7, 9,

				8, 9, 10,
				10, 9, 11,

				10, 11, 0,
				0, 11, 1,
			};
		}
		else if (hasRightWall)
		{
			return {
				0, 1, 2,
				2, 1, 3,

				2, 3, 4,
				4, 3, 5,

				4, 5, 6,
				6, 5, 7,

				6, 7, 0,
				0, 7, 1,
			};
		}
		else if (hasBottomWall)
		{
			return {
				0, 1, 2,
				2, 1, 3,

				2, 3, 4,
				4, 3, 5,

				4, 5, 6,
				6, 5, 7,

				6, 7, 0,
				0, 7, 1,
			};
		}
		return {};
	}
private:
	bool hasRightWall = false;
	bool hasBottomWall = false;
	int group = -1;
};

class EllersAlgorithm
{
public:
	vector<vector<Cell>> Generate(int width, int height);
private:
	void CreateRightWall(vector<Cell>& cells);
	void CreateBottomWall(vector<Cell>& cells);
	vector<Cell> PrepareNextRow(vector<Cell>& cells, int rowNumber, int width);
	bool CreateWall();
private:
	const int MaxBias = 64;
	const int Bias = 32;
};
