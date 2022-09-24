#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;
ll dp[1000001]; 

 //state:
 //dp[sum]= all possible way to make sum using different coins

 //transition:
 //dp[sum]= dp[sum-c0]+dp[sum-c1]+dp[sum-c2]+......dp[sum-cn];
 //i.e all possible ways to make given sum with coin 1 + all possible ways to make sum with coin 2 + ....all possible ways to make given sum with coin n.

 //bc: when sum is zero atleast one way always exist.

int main(int argc, char const *argv[])
{
    ll n, x,i,j;
    cin >> n >> x;
    vector<ll> v(n);

    for ( i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
   
    
    dp[0]=1;
    for (i = 0; i < n; i++ )
    {

        for (j = 0; j <= x; j++ )
        {
            if (j - v[i] >= 0)
            {
                dp[j] += dp[j - v[i]];
                dp[j]%=M;
            }
        }
    }

    cout<<dp[x]<<endl;
}
