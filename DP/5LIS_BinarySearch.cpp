#include <bits/stdc++.h>
using namespace std;

// time compl: O(nlogn);

int LIS(int ar[], int n)
{
    vector<int> v;
    v.push_back(ar[0]);
    for (int i = 1; i < n; i++)
    {
        int j = v.size();
        if (ar[i] > v[j - 1])//CURR ELE IS GREATER THAN LAST VALUE OF VECTOR
        {
            v.push_back(ar[i]);
        }
        else
        {
            int idx = lower_bound(v.begin(), v.end(), ar[i]) - v.begin();
            if (idx < j)
            {
                v[idx] = ar[i];
            }
        }
    }
    return v.size();
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << LIS(ar, n);

    return 0;
}