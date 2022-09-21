#include <bits/stdc++.h>
using namespace std;
int dp[501][501];

int main(int argc, char const *argv[])
{
    int r, c;
    cin >> r >> c;
   
    int x, y;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            dp[i][j]=INT_MAX;
            if (i==0 || j==0)
            {
                dp[i][j]=INT_MAX;
            }
            
           else if (i == j)
            {
                dp[i][j] = 0;
            }
            else
            {

                for (int k = 1; k < i; k++)
                {
                    dp[i][j] = min(dp[i][j], 1 + dp[k][j] + dp[i - k][j]);
                }
                for (int k = 1; k < j; k++)
                {
                    dp[i][j] = min(dp[i][j], 1 + dp[i][j - k] + dp[i][k]);
                }
            }
        }
    }

    cout<<dp[r][c]<<endl;

    return 0;
}
