//#PROBLEMA 14
//#Longest Collatz sequence
/*
The following iterative sequence is defined for the set of positive integers:

n -> n/2 (n is even)
n -> 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/
#include <iostream>
#include <vector>
#include <map>
using namespace std;
size_t MaxN = 5000000 + 2;
const int Unknown = -1;
vector<short> cache(MaxN, Unknown);
short steps(long long x)
{
  if (x == 1)
    return 1;
  if (x < cache.size() && cache[x] != Unknown)
    return cache[x];
  long long next;
  if (x % 2 == 0)
    next = x / 2;
  else
    next = 3 * x + 1;
  auto result = 1 + steps(next);
  if (x < cache.size())
    cache[x] = result;
  return result;
}

int main()
{
  map<int,int> longest;
  int maxTested = 1;
  longest[maxTested] = 1;
  int tests;
  cin >> tests;
  while (tests--)
  {
    int x;
    cin >> x;
    for (; maxTested <= x; maxTested++)
    {
      auto length = steps(maxTested);
      if (length >= longest.rbegin()->second)
        longest[maxTested] = length;
    }
    auto best = longest.upper_bound(x);
    best--;

    cout << best->first << std::endl;
  }
  return 0;
}
