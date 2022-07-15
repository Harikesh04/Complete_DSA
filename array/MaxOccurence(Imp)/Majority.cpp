#include <bits/stdc++.h>
using namespace std;

// 1. we can solve it by map.

// 2.Moore's Voting algo
//  this is to find the max occured element in an array in O(n) time.
// known as mure's moting algo.

void maxOccEle(int ar[], int n)
{

  int res = 0, cnt = 1;
  for (int i = 1; i < n; i++)
  {
    if (ar[res] == ar[i])
    {
      cnt++;
    }
    else
    {
      cnt--;
    }

    if (cnt == 0)
    {
      res = i;
      cnt = 1;
    }
  }
  cout <<"max occuring ele is "<< ar[res] <<"and its index is"<<res<< endl;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  int ar[n];
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }
  maxOccEle(ar, n);

  return 0;
}