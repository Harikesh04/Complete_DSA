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

int main(int argc, char const *argv[])
{
    ll a,b,m;
    cin>>a>>b>>m;
   cout<< powermod(a,b,m)<<endl;
    

    return 0;
}
