#include <bits/stdc++.h>
using namespace std;

// time compl: O(nlogn);

int MaxCuts(int n, int a, int b, int c)
{
    vector<int>dp(n+1,-1);
    dp[0]=0;

    for (int i = 1; i <= n; i++)
    {
        if(i-a>=0){
            dp[i]=max(dp[i],dp[i-a]);
        }
        if(i-b>=0){
            dp[i]=max(dp[i],dp[i-b]);
        }
        if(i-c>=0){
            dp[i]=max(dp[i],dp[i-c]);
        }
        if (dp[i]!=-1)
        {
            dp[i]++;
        }
        
    }
    return dp[n];
    
    
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    cout<<MaxCuts(n, a, b, c);

    return 0;
}
