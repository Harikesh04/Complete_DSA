#include <bits/stdc++.h>
using namespace std;

// this is the brute force approach to find the max sum of the subarray of the array .
int main(int argc, char const *argv[])
{
    int n,k;cin>>n>>k;
    if ((n&(1<<(k-1)))>0)
    {
       cout<<"set bit"<<endl;
    }
    else{
        cout<<"unset bit"<<endl;
    }
    

    return 0;
}
