#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;
ll dp[1000001]; 

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
