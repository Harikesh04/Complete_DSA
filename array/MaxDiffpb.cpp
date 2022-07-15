#include<bits/stdc++.h>
using namespace std;

//here in this pb you have to find the max diff between the array of the element such that ar[j]-ar[i]=max
//and j>i;

void MaxDiff(int ar[],int n){
    int mn=ar[0];
    int mx=INT_MIN;
    for (int i = 1; i < n; i++)
    {
       mx=max(mx,ar[i]-mn);
       mn=min(mn,ar[i]);
    }
    cout<<mx<<endl;
}

int main(int argc, char const *argv[])
{
    int ar[]={2,3,10,6,4,8,1};
   
   MaxDiff(ar,7);
    
    return 0;
}
