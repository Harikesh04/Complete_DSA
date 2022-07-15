#include <bits/stdc++.h>
using namespace std;

int BS(vector<int> v, int s, int e, int x)
{

    // base case
    if (s > e)
    {
        return -1;
    }

    int mid = (s + e) / 2;
    if (v[mid] == x)
    {
        return mid;
    }

    if (v[mid] > x)
    {
        BS(v, s, mid - 1, x);
    }
    else
    {
        BS(v, mid + 1, e, x);
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;
    cout << BS(v, 0, n - 1, x);

    return 0;
}
