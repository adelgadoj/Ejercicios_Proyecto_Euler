#include <string>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
  int MinDigits = 50 + 10;
  vector<int> sum(MinDigits, 0);
  int numbers = 100;
  while (numbers--)
  {
    string strAdd;
    cin>>strAdd;
    vector<int> add;
    for (auto i = strAdd.rbegin(); i != strAdd.rend(); i++)
      add.push_back(*i - '0');
    add.resize(sum.size(), 0);
    for (int i = 0; i < add.size(); i++)
    {
      sum[i] += add[i];
      if (sum[i] >= 10)
      {
        sum[i + 1]++;
        sum[i] -= 10;
      }
    }
  }
  auto i = sum.rbegin();
  while (*i == 0)
    i++;
  unsigned int numDigits = 10;
  while (numDigits-- > 0)
    cout << *i++;

  return 0;
}
