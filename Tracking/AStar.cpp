#include "AStar.h"
#include <queue>
#include <map>
#include "Direction.h"
#include "AreaType.h"

AStarAlgorithm::AStarAlgorithm(vector<vector<int>> area, pair<int, int> startPos, pair<int, int> destPos)
{
	priority_queue<Node, vector<Node>, Comparison> open;

	// vector<vector<bool>> closed;
	// closed.resize(area.size());

	// for (int i = 0; i < closed.size(); ++i)
	// {
	// 	closed[i].resize(area[i].size(), false);
	// }

	vector<Node> closedNodes;
	Node sNode;

	map<Direction, pair<int, int>> deltaLocations
	{
		{Direction::Up, make_pair(0, 1)},
		{Direction::Right, make_pair(1, 0)},
		{Direction::Down, make_pair(0, -1)},
		{Direction::Left, make_pair(-1, 0)},
	};

	sNode.x = startPos.first;
	sNode.y = startPos.second;
	sNode.G = 0;
	sNode.H = (abs(destPos.first - startPos.first) + abs(destPos.second - startPos.second));
	sNode.Parent = make_pair(-1, -1);

	open.push(sNode);

	// closed[sNode.x][sNode.y] = true;

	vector<vector<int>> result = area;

	while (open.size())
	{
		Node head = open.top();
		closedNodes.push_back(head);
		result[head.x][head.y] = AreaType::Closed;
		open.pop();

		if (head.x == destPos.first && head.y == destPos.second)
		{
			break;
		}

		Node newNode;

		for (int direction = Direction::Start + 1; direction != Direction::End; ++direction)
		{
			pair<int, int> deltaLocation = deltaLocations[(Direction)direction];
			int nextX = deltaLocation.first + head.x;
			int nextY = deltaLocation.second + head.y;

			if (0 <= nextX && nextX < area.size() && 0 <= nextY && nextY < area.size())
			{
				// if (area[nextX][nextY] != AreaType::Wall && closed[nextX][nextY] == false)
				if (area[nextX][nextY] != AreaType::Wall && result[nextX][nextY] != AreaType::InQueue && result[nextX][nextY] != AreaType::Closed)
				{
					newNode.x = nextX;
					newNode.y = nextY;
					newNode.G = head.G + 1;
					newNode.H = (abs(destPos.first - newNode.x) + abs(destPos.second - newNode.y));
					newNode.Parent = make_pair(head.x, head.y);
					// closed[newNode.x][newNode.y] = true;
					result[newNode.x][newNode.y] = AreaType::InQueue;
					open.push(newNode);
				}
			}
		}
	}

	int x = closedNodes.back().x;
	int y = closedNodes.back().y;

	while (closedNodes.size())
	{
		if (x == closedNodes.back().x && y == closedNodes.back().y)
		{
			route.push_back(closedNodes.back());
			x = closedNodes.back().Parent.first;
			y = closedNodes.back().Parent.second;
		}

		closedNodes.pop_back();
	}
}
