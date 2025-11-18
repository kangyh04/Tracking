#pragma once
#include <vector>

using namespace std;

typedef struct node
{
public:
	int x, y;
	int G, H;
	pair<int, int> Parent;
}Node;

struct Comparison
{
	bool operator()(const node u, const node v)
	{
		if (u.G + u.H > v.G + v.H) return true;
		else if (u.G + u.H == v.H + v.H) return u.G < v.G;
		else return false;
	}
};

class AStarAlgorithm
{
public:
	AStarAlgorithm(vector<vector<int>> map, pair<int, int> startPos, pair<int, int> destPos);

	const vector<Node> GetRoute() const
	{
		return route;
	}

private:
	vector<Node> route;
};
