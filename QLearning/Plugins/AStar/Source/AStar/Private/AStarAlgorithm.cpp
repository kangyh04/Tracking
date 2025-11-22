// Fill out your copyright notice in the Description page of Project Settings.


#include "AStarAlgorithm.h"

TArray<int> UAStarAlgorithm::FindPath(const TArray<int> grid, int width, int startX, int startY, int destX, int destY)
{
	TMap<FIntPoint, FAStarNode> closedNodes;
	TArray<FAStarNode> openNodes;
	FAStarNode currentNode;

	TArray<TPair<int, int>> directionOffsets
	{
		TPair<int, int>(0, 1),
		TPair<int, int>(0, -1),
		TPair<int, int>(-1, 0),
		TPair<int, int>(1, 0)
	};

	int height = grid.Num() / width;

	currentNode.X = startX;
	currentNode.Y = startY;
	currentNode.G = 0;
	currentNode.H = FMath::Abs(destX - startX) + FMath::Abs(destY - startY);
	currentNode.ParentX = -1;
	currentNode.ParentY = -1;

	openNodes.HeapPush(currentNode, Comparison);

	TArray<int> result = grid;

	while (openNodes.Num() > 0)
	{
		openNodes.HeapPop(currentNode, Comparison);
		closedNodes.Add(FIntPoint(currentNode.X, currentNode.Y), currentNode);
		result[currentNode.Y * width + currentNode.X] = NodeState::Closed;

		if (currentNode.X == destX && currentNode.Y == destY)
		{
			break;
		}

		for (const auto& offset : directionOffsets)
		{
			int neighborX = currentNode.X + offset.Key;
			int neighborY = currentNode.Y + offset.Value;

			if (0 < neighborX && neighborX <= width &&
				0 < neighborY && neighborY <= height)
			{
				if (result[neighborY * width + neighborX] == NodeState::Hide)
				{
					FAStarNode neighborNode;
					neighborNode.X = neighborX;
					neighborNode.Y = neighborY;
					neighborNode.G = currentNode.G + 1;
					neighborNode.H = FMath::Abs(destX - neighborX) + FMath::Abs(destY - neighborY);
					neighborNode.ParentX = currentNode.X;
					neighborNode.ParentY = currentNode.Y;

					result[neighborY * width + neighborX] = NodeState::Open;

					openNodes.HeapPush(neighborNode, Comparison);
				}
			}
		}
	}

	FIntPoint lastPoint(destX, destY);
	if (closedNodes.Contains(lastPoint) == false)
	{
		UE_LOG(LogTemp, Warning, TEXT("Path not found."));
		return { 0 };
	}

	auto lastNode = closedNodes[FIntPoint(destX, destY)];
	int nodeCount = closedNodes.Num();

	while (lastNode.ParentX != -1 && lastNode.ParentY != -1 && nodeCount-- > 0)
	{

		auto parentPoint = FIntPoint(lastNode.ParentX, lastNode.ParentY);

		result[lastNode.Y * width + lastNode.X] = NodeState::OnRoute;

		if (closedNodes.Contains(parentPoint))
		{
			lastNode = closedNodes[parentPoint];
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Path reconstruction failed."));
			break;
		}
	}

	result[startY * width + startX] = NodeState::Start;
	result[destY * width + destX] = NodeState::Gole;

	return result;
}
