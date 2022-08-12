#include <bits/stdc++.h>
using namespace std;

// *** V Imp interview problem

// here given an array and we have to find the longest subarray wiht equal no. of zero and one

// 1 0 1 1  1 0 0
// ans =6;

// there is a catch in problem first convert all zero to -1;
// then the problem is reduced into find the longest subarray with sum 0;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> m;
    int pfsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            v[i] = -1;
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        pfsum += v[i];
        if (pfsum == 0)
        {
            res = i + 1; 
        }
          if (m.find(pfsum) == m.end())
        {
            m[pfsum] = i;
        } 
        if (m.find(pfsum) != m.end())
        {
            res = max(res, i - m[pfsum]);
        }
      
    }
    cout << res << endl;

    return 0;
}
