#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

// state: dp[i][x]: no. of valid array having ith elem as x .

//_ , _ , _,_,_(x-1,x,x+1),x=> if ith ele of the array is x then i-1 th ele can  we x-1,x,x+1 such that the array of size i-1 is valid.

// transition:

// dp[i][x]=dp[i-1][x]+dp[i-1][x-1]+dp[i-1][x+1];

// base case:

// i==1 => if array is of size 1 then only 1 array possible if ar[i-1]==0 or ar[i-1]==x else 0


int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int dp[n+2][m+2];
    memset(dp, 0, sizeof dp);
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int x = 1; x <= m; x++)
        {
            if (i == 1)
            {
                if (v[i] == 0 || v[i] == x)
                {
                    dp[i][x] = 1;
                }
                else
                {
                    dp[i][x] = 0;
                }
            }
            else
            {
                if (v[i] == 0 || v[i] == x)
                {

                     dp[i][x] = ((dp[i-1][x-1] + dp[i-1][x])%mod + dp[i-1][x+1])%mod;
                }
                else
                {
                    dp[i][x] = 0;
                }
            }
        }
    }

    int res = 0;
    for (int x = 1; x <= m; x++)
    {
        res=(res+ dp[n][x])%mod;
       
    }

    cout << res << endl;

    return 0;
}
