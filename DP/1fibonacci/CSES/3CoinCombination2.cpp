#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

// dp[i][sum]=> no. of unique ways to produce sum with the help of first i coins.

//     node(N,sum)
//     /            \
//    node(N-1,sum)  node(N,sum-v[N-1])

//since for every state we have two option whether include a coin or not.

//transition: dp[i][sum]= dp[i-1][sum] + dp[i][sum-v[i-1]];
//dp[i-1][sum]=> ignored nth coin so we have remaining n-1 coin
//dp[i][sum-v[i-1]]=> taken ith coin .


int main(int argc, char const *argv[])
{
    int n,x;
    cin >> n >> x;
    vector<int> v(n+1);
    int dp[n+1][x+1];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int sum = 0; sum <= x; sum++)
        {
            if (sum == 0)
            {
                dp[i][sum] = 1;
            }
            else
            {
                ll op1 = (i == 1) ? 0 : dp[i-1][sum]; // ignore the present  coin
                ll op2 = 0;
                if (sum >= v[i-1])
                {
                    op2 = dp[i][sum - v[i-1]]; // if sum is greater then the present coin then include the coin. since we have unlimited no. of coin therefore no. of coin i.e i is not reduced
                }

                dp[i][sum] = (op1 + op2) % M;
            }
        }
    }
    cout << dp[n][x] << endl;

   
}
