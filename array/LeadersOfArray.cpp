#include<bits/stdc++.h>
using namespace std;

// 1. first approach 

// using two for loop . O(N^2).

//2.best approach 
// traverse from last

void printLeaders(int ar[],int n){
    int currLeader=ar[n-1];
    cout<<ar[n-1]<<" ";
    for (int i =n-2; i >=0; i--)
    {
        if (ar[i]>currLeader)
        {
           currLeader=ar[i];
           cout<<ar[i]<<" ";
        }
        
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    int ar[]={10,5,6,2,1};
    int n=5;
   printLeaders(ar,n);
    
    return 0;
}
