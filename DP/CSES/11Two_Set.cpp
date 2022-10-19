#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;


//dp state : dp[i][sum]= no of ways to distrute sum of first i natural no. into 2 sets

// recurrence : dp[i][sum]= dp[i-1][sum-i] + dp[i-1][sum ]// i.e consider the given no. or leave the given no. in sets

//bc : dp[0][0]=1,dp[0][x]=0;

//fs ; dp[n][n*(n+1)/4]/2

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;

    ll dp[n + 1][n * n];

    dp[0][0] = 1;

    for (ll i = 1; i <= (n * (n + 1)) / 2; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int sum = 0; sum <= ((n * (n + 1)) / 4); sum++)
        {
            dp[i][sum] = (((i > sum) ? 0 : dp[i - 1][sum - i]) + dp[i - 1][sum]) % M;
        }
    }

    if (((n * (n + 1)) % 4) != 0)
    {
        cout << 0 << endl;
    }
    else
    {

        cout << (dp[n][(n * (n + 1)) / 4] * 500000004) % M << endl;
    }

    return 0;
}
