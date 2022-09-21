#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

//dp state => dp[i]= no. of ways to produce sum i by throwing dice.

// transition: => dp[i]= dp[i-1]+dp[i-2]+dp[i-3]+......dp[i-6]; 

//bc: dp[0]=1,dp[1]=1;



int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;

    ll dp[n+1];
    dp[0] = 1;
   
    for (int i = 1; i <= n; i++)
    {
        dp[i]=0;
       
        for (int j = 1; j <= 6; j++)
        {
            if ((i - j) >= 0)
            {

                dp[i] += dp[i - j];
                dp[i]=dp[i]%M;
            }
        }
       
    }

    cout<<dp[n]%M<<endl;
}
