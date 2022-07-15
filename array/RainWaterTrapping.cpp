#include<bits/stdc++.h>
using namespace std;


//this is the nieve approach
//here we find the lmax and rmax block
//then we iterate in between second block to second last block
//since first and last block can't store any water.
//then we find min of lmax and rmax block then 
//then we subtract ar[i] from min(lmax,rmax).

//O(n^2).
// void WaterStored(int ar[],int n){

// int res=0;
//     for (int i = 1; i < n-1; i++)
//     {
//         int lmax=ar[i];
//        for (int j = 0; j < i; j++)
//        {
//          lmax=max(lmax,ar[j]);
//        }
//        int rmax=ar[i];
//         for (int j = i+1; j < n; j++)
//        {
//          rmax=max(rmax,ar[j]);
//        }
//        res+=min(lmax,rmax)-ar[i];
       
//     }
//     cout<<res<<endl;
    
// }

//here in optimised approach we use precomputation techn here we find the lmax array and rmax array  and do the same in prev.

void WaterStoredOp(int ar[],int n){
    int lmax[n]={0};
    int rmax[n]={0};
    int res=0;
    lmax[0]=ar[0];
    for (int i = 1; i < n; i++)
    {
       lmax[i]=max(ar[i],lmax[i-1]);
    }
    rmax[n-1]=ar[n-1];
    for (int i = n-2; i >=0; i--)
    {
       rmax[i]=max(ar[i],rmax[i+1]);
    }
    for (int i = 1; i < n-1; i++)
    {
       res+=(min(lmax[i],rmax[i])-ar[i]);
    }
    
    cout<<res<<endl;
    
}

int main(int argc, char const *argv[])
{
   int n;cin>>n;
   int ar[n];
   for (int i = 0; i < n; i++)
   { 
    cin>>ar[i];

   }
   WaterStoredOp(ar,n);
    
    return 0;
}
