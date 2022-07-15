#include<bits/stdc++.h>
using namespace std;

void reverse(int ar[],int low,int high){
    while (low<high)
    {
        swap(ar[low],ar[high]);
        low++;
        high--;
    }
    
}

//this is the best approach
void leftRotate(int ar[],int n,int d){

    d=d%n;//important edge case
    reverse(ar,0,d-1);
    reverse(ar,d,n-1);
    reverse(ar,0,n-1);
}

int main(int argc, char const *argv[])
{
    int ar[]={1,2,3,4,5};
    int n=5;
    leftRotate(ar,n,2);
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
