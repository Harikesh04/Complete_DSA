#include <bits/stdc++.h>
using namespace std;

// check if a number is power of 2 or not .
int main(int argc, char const *argv[])
{
   int n;cin>>n;
   if ((n&(n-1))==0)
   {
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
   
    

    return 0;
}
