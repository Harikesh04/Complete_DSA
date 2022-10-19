#include<bits/stdc++.h>
using namespace std;


int CC(vector<int>&v,vector<vector<int>>&memo,int n,int sum){
       int rejectcoin=INT_MAX,acceptcoin=INT_MAX;
        if(sum==0){
            return 0  ;

        }
        if(memo[n][sum] != INT_MAX) return memo[n][sum];
      
        if(n==0){
            return INT_MAX - 1;
        }
        
        rejectcoin =CC(v,memo,n-1,sum);
                      
        if(v[n-1]<=sum){

        acceptcoin =1+ CC(v,memo,n,sum-v[n-1]);
        }
        memo[n][sum]= min(rejectcoin,acceptcoin);// which path uses min coin
        
        return memo[n][sum];
    }


    int main(int argc, char const *argv[])
    {

       int n ,sum;
       cin>>n>>sum;
       vector<int>v(n);
       for (int i = 0; i < n; i++)
       {
         cin>>v[i];
       }
       
          vector<vector<int>> memo(n + 1, vector<int>(sum + 1, INT_MAX));
          int res = CC(v,memo,n,sum);
          return res == INT_MAX - 1 ? -1 : res;
    }
    