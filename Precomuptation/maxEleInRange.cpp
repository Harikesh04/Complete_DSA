#include <bits/stdc++.h>
using namespace std;

// here is very good problem

// IN this problem we are given two array l[] and r[] we have to find the max occuring ele in between the range of l[il to r[i] .

// APPROACHES
// 1.traverse through every l[i] to r[i] create a map and increment it then find the max occuring ele in a map.
// O(n^2)

// 2.by PREFIX SUM

// here we will create an array and will marked all ele to zero
//  will increment for l[i] and decrement for [r[i]+1]
//  find the prefix sum
//  return the index of max ele in the arr

void maxOccEle(vector<int> a, vector<int> b)
{
    vector<int> v(10000);
    for (int i = 0; i < a.size(); i++)
    {
        v[a[i]]++;
        v[b[i] + 1]--;
    }
    int n = 10000;
    vector<int> pf(n + 1);
    pf[0] = v[0];
    for (int i = 1; i < 1000; i++)
    {
        pf[i] = pf[i - 1] + v[i];
    }

    // now finding the index of max ele in the vector
    int res = 0, mx = pf[0];
    for (int i = 1; i < 1000; i++)
    {
        if (pf[i] > mx)
        {
            mx = pf[i];
            res = i;
        }
    }

    cout << res << endl;
    return;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    maxOccEle(a, b);

    return 0;
}
