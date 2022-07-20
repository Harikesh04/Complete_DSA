#include<bits/stdc++.h>
using namespace std;


int fact(int n){
    if (n==0)
    {
        return 1;
    }
    
    return n*fact(n-1);
}

int main(int argc, char const *argv[])
{
    int n;cin>>n;
    string s;cin>>s;
    int mul = fact(s.size());
    int ar[256]={0};
    
    for (int i = 0; i < s.size(); i++)
    {
        ar[s[i]]++;
    }
    for (int i = 1; i <256; i++)
    {
       ar[i]+=ar[i-1];
    }
    int res=1;
    for (int i = 0; i < s.size(); i++)
    {
        mul=mul/(n-i);
        res+=ar[s[i]-1]*mul;
        for (int j = s[i]; j <256; j++)
        {
           ar[j]--;
        }
        

    }

    cout<<res<<endl;
    


    


    return 0;
}
