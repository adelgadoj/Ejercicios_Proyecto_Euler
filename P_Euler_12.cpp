#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int MaxDivisors = 1000;
  vector<int>smallest;
  smallest.push_back(0);
  int index    = 0;
  int triangle = 0;
  while (smallest.size() < MaxDivisors)
  {
    index++;
    triangle += index;
    if (smallest.size() > 300 && triangle % 10 != 0)
      continue;
    int divisors = 0;
    int i        = 1;
    while (i*i < triangle)
    {
      if (triangle % i == 0)
        divisors += 2;
      i++;
    }
    if (i*i == triangle)
      divisors++;
    while (smallest.size() <= divisors)
      smallest.push_back(triangle);
  }
  cout<<smallest[501];
  return 0;
}
