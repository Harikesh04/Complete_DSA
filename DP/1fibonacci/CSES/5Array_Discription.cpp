#include <bits/stdc++.h>
using namespace std;
int dp[100001][101];
const int m = 1e9 + 7;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            if (i == 0)
            {
                if (v[0] == 0 || v[0] == j)
                {
                    dp[0][j] = 1;
                }
                else
                {
                    dp[0][j] = 0;
                }
            }
            else
            {
                if (v[i] == 0 || v[i] == j)
                {
                    dp[i][j] = ((dp[i - 1][j] + dp[i - 1][j - 1])%m + dp[i - 1][j + 1])%m;
                }else{
                    dp[i][j]=0;
                }
            }
        }
    }
    int res = 0;
    for (int i = 1; i <= m; i++)
    {
        res += dp[n - 1][i];
        res= res% m;
    }

    cout << res << endl;

    return 0;
}
