#include<bits/stdc++.h>
using namespace std;

int MinJumps(vector<int>&v,int n){
        vector<int>dp(n,INT_MAX);
        dp[0]=0;// because we already here
        
        int res=INT_MAX;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(j+v[j]>=i){
                    if(dp[j]!=INT_MAX)//from that we are checking whether we can reach to jth index or not 
                        dp[i]=min(dp[i],dp[j]+1);// here we added one because we are taking a jump.
                }
            }
        }
        return dp[n-1];
    }

int main(int argc, char const *argv[])
{
    
    return 0;
}
