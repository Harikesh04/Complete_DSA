#include <bits/stdc++.h>
using namespace std;

//accepted solution leetcode
int minCount(string &w1, string &w2, int n, int m, vector<vector<int>> &v)
{
    int res = 0;
    int a = INT_MAX, B = INT_MAX;
    if (n == 0)
    {
        return m;
    }
    if (m == 0)
    {
        return n;
    }
    if (v[n][m] != -1)
    {

        return v[n][m];
    }
    if (w1[n - 1] == w2[m - 1])
    {
        v[n][m] = minCount(w1, w2, n - 1, m - 1, v);
    }
    else
    {
        v[n][m] = 1 + min(min(minCount(w1, w2, n, m - 1, v), minCount(w1, w2, n - 1, m, v)), minCount(w1, w2, n - 1, m - 1, v));
    }

    return v[n][m];
}

int main(int argc, char const *argv[])
{
    string w1, w2;
    cin >> w1 >> w2;
    int n = w1.size();
    int m = w2.size();
    vector<vector<int>> v(n + 1, vector<int>(m + 1, -1));
    cout << minCount(w1, w2, n, m, v);
    return 0;
}
