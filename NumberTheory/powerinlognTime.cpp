#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll power(ll x,ll n){
    ll res =1;
    while (n)
    {
       if (n%2)
       {
          res=res*x;
          n--;
       }else{
           x=x*x;
           n=n/2;
       }
       
    }
    return res;
    
}


int main(int argc, char const *argv[])
{
    ll x, n;
    cin >> x >> n;
    cout<<power(x, n)<<endl;
    
    return 0;
}
