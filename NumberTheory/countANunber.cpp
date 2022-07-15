#include <bits/stdc++.h>
using namespace std;
#define ll long long




int main(int argc, char const *argv[])
{
   ll x;cin>>x;
   ll cnt=0;
   while (x>0)
   {
     x=x/10;
     cnt++;
   }
   cout<<cnt<<endl;
   
    return 0;
}
