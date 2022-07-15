#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,sum=0;
    cin>>n;
    int ar[n],pf[n];
    pf[0]=0;
    for (int i = 1; i <= n; i++)
    {
        cin>>ar[i];
        pf[i]=ar[i]+pf[i-1];
    }
    int q;cin>>q;
    while (q--)
    {
       int a,b;
       cin>>a>>b;
       int ans=pf[b]-pf[a-1];
       cout<<ans<<endl;
    }
    
    
    return 0;
}
