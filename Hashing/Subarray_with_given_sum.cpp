#include <bits/stdc++.h>
using namespace std;


// (imp)
// here given an array we have to find whether there exist an subarray with sum equal to x or not if yes
// print yes else no.

// approach prifix sum and hashing

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    int pfsum = 0; // prefix sum   
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum;
    cin >> sum;
    int res = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        pfsum += v[i];
        if (pfsum == sum)
        {
            res =  i + 1;
        }

        if (m.find(pfsum) == m.end())
        {
            m[pfsum] = i;
        }
        if (m.find(pfsum - sum) != m.end())
        {
            res = max(res, i - m[pfsum - sum]); // since we have taken zero based indexing therefore  no need to reduce by 1;
        }
    }
    cout<<res<<endl;
    return 0;
}
