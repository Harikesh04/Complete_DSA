#include <bits/stdc++.h>
using namespace std;

// given an array of coins and a sum we have to find the total number of combinations of sum using the coins from the array to make the given sum

// {1,2,3} , sum=5;

// where dp[i][j] represent the number of combinations we can get with sum i and coins from i to j



int GetCount(int ar[], int n, int sum)
{
    int dp[sum+1][n+1];
    for (int i = 0; i <= n; i++)
    {
       dp[0][i]=1; // when sum is 0 the possiblity is always one.
    }
    for (int i = 0; i <= sum; i++)
    {
       dp[i][0]=0;//// when coin is 0 the possiblity is always 0.
    }
    for (int i = 1; i <= sum; i++)
    {
      for (int j = 1; j <=n; j++)
      {
        dp[i][j]=dp[i][j-1];
        if (ar[j-1]<=i)
        {
           dp[i][j]+=dp[i-ar[j-1]][j];
        }
        
      }
      
    }
    return dp[sum][n];
    
    
}
int main(int argc, char const *argv[])
{

    int n, sum;
    cin >> n >> sum;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << GetCount(ar, n, sum);

    return 0;
}
