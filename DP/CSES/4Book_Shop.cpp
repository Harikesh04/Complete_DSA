#include <bits/stdc++.h>
using namespace std;
int dp[1001][100001];

// dp state: dp[i][j]= max no. of pages we can get from j  amount and when first i books are allowed .

//transition: dp[i][j]
        //     /          \
        //   dp[i-1][j]     dp[i-1][j-p[i]]+pg[i]

int Book_Shop(vector<int> &pr, vector<int> &pg, int n, int x)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= pr[i - 1])
            {
                dp[i][j] = max(dp[i - 1][j], (pg[i - 1] + dp[i - 1][j - pr[i - 1]]));
            }
        }
    }

    return dp[n][x];
}

int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n >> x;
    vector<int> pr(n);
    vector<int> pg(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> pg[i];
    }
    cout << Book_Shop(pr, pg, n, x) << endl;

    return 0;
}
