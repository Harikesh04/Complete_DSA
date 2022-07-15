#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,q;cin>>n>>q;
    int arr[n]={0};
    int val=2;
    //here val is that vlue which has to be added
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        arr[l]+=val;
        arr[r+1]-=val;
    }
    int pf[n]={0};
    for (int i = 1; i <= n; i++)
    {
       pf[i]=pf[i-1]+arr[i];
       cout<<pf[i]<<endl;
    }
    
    
    return 0;
}
