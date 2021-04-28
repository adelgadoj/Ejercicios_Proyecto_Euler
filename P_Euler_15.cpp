//#PROBLEMA 15
//#Lattice paths
/*
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down,
there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?
*/
#include <vector>
#include <deque>
#include <utility>
#include <iostream>
using namespace std;
int main()
{
  int tests;
  cin >> tests;
  while (tests--)
  {
    int width, height;
    cin >> width >> height;
    long long Unknown = 0;
    vector<vector<long long>> grid(width + 1);
    for (auto& column : grid)
      column.resize(height + 1, Unknown);
    grid[width][height] = 1;
    deque<pair<int,int>> next;
    next.push_back(make_pair(width - 1, height));
    next.push_back(make_pair(width, height - 1));
    while (!next.empty())
    {
      auto current = next.front();
      next.pop_front();
      auto x = current.first;
      auto y = current.second;

      if (grid[x][y] != Unknown)
        continue;

      long long routes = 0;
      if (x < width)
        routes += grid[x + 1][y];
      if (y < height)
        routes += grid[x][y + 1];

#define ORIGINAL
#ifndef ORIGINAL
      routes %= 1000000007;
#endif
      grid[x][y] = routes;
      if (x > 0)
        next.push_back(make_pair(x - 1, y));
      if (y > 0)
        next.push_back(make_pair(x, y - 1));
    }
    cout << grid[0][0] << std::endl;
  }
  return 0;
}
