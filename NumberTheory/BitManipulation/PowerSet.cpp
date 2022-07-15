#include <bits/stdc++.h>
using namespace std;

//given a string s="abc" print the power set of string.

//total no. of element in power set is 2^n -  1.

int main(int argc, char const *argv[])
{
    string s;cin>>s;
    int x=pow(2,s.size());
   for (int counter = 0; counter < x; counter++)
   {
     for (int j = 0; j < s.size(); j++)
     {
       if ((counter&(1<<j))!=0)
       {
        cout<<s[j];
       }
       
     }
     cout<<endl;
     
   }
   

    

    return 0;
}