#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct project{
    int st,ed,rwd;
};

bool cmp(project& p1,project& p2){
    return p1.ed<p2.ed;

}

int findind(vector<int>&endpts,int i){
    auto it = lower_bound(endpts.begin(),endpts.end(),i);
    if(it == endpts.begin()){
        return 0;
    }else{
        it--;
        return 1+ distance(endpts.begin(),it);
    }

}

ll solve(vector<project>&v){
    ll n=v.size();
    ll dp[n+1];
    dp[0]=0;
    vector<int>endpts;
    for (int i = 1; i <n; i++)
    {
        endpts.push_back(v[i].ed);
    }
    
    for (int i = 1; i < n; i++)
    {
        ll op1 = dp[i-1];
        ll op2= v[i].rwd;

        int j = findind(endpts,v[i].st);
        op2+=dp[j];

        dp[i]= max(op1,op2);
    }

    return dp[n-1];
    
    


}

int main(int argc, char const *argv[])
{
    int t;cin>>t;
       vector<project>v(t+1);
   for(int i=1;i<=t;i++){
    cin>>v[i].st>>v[i].ed>>v[i].rwd;
   }
    sort(v.begin()+1,v.end(),cmp);

   cout<< solve(v)<<endl;
    
    return 0;
}
