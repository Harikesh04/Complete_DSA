#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;
ll dp[1000001]; 

// dp state: dp[i]= min no. of coin required to get sum i. 

int main(int argc, char const *argv[])
{
    ll n, sum,i,j;
    cin >> n >> sum;
    vector<ll> v(n);

    for ( i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
   
    for (int j = 0; j <= sum; j++)
    {
       dp[j]=INT_MAX;
    }
    dp[0]=0;
    for ( j = 1; j <= sum; j++)
    {

        for ( i = 0; i < n; i++)
        {
            if (j - v[i] >= 0)
            {
                dp[j] = min(dp[j], dp[j - v[i]] + 1);
            }
        }
    }

    cout<<(dp[sum]==INT_MAX? -1 :dp[sum])<<endl;
}
