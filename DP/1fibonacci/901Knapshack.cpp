#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];

int Knapshack(vector<int> &val, vector<int> &w, int W, int n)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if ( dp[n][W]!=-1)
    {
        return  dp[n][W];
    }
    
    if (w[n - 1] > W)
    {
        dp[n][W] = Knapshack(val, w, W, n - 1); // ignore the ele.
    }
    else
    {
        dp[n][W] = max(Knapshack(val, w, W, n - 1), val[n - 1] + Knapshack(val, w, W - w[n - 1], n - 1));
    }
    return dp[n][W];
}

int main(int argc, char const *argv[])
{
    int n, W;
    cin >> n >> W;
    vector<int> val(n);
    vector<int> w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout<<Knapshack(val, w, W, n);

    return 0;
}
