#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll powermod(ll x, ll y, ll p)
{
    //binary exponentiation
    ll res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

const int N =1e6+10;
const int M =1e5+10;
int fact[N];
ll powermod(ll x, ll y, ll p)
{
    //binary exponentiation
    ll res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    fact[0]=1;
    for (int i = 1; i < N; i++)
    {
        fact[i]=(fact[i-1]*i*1ll)%M;
    }
    int q;cin>>q;
    while (q--)
    {
        int n,k;
        cin>>n>>k;
        int ans = fact[n];
        int den = (fact[n-k]*1LL* fact[k])%M;
        ans = ans * powermod(den,M-2,M);// here calculating inverse 
        // inverse of a number a is a^m-2.
        
        cout<<ans<<endl;
    }
    
    
  
    

    return 0;
}
