#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
long long fact[N];
int hsh[N];
//the globaly declared array are all intialized with zero.


// given t test cases in each test case print the factorial of the given number modulo m 
//m=10^9+7;

//if we will go with normal approach then it will give tle since of O(N^2).
//so we will use precompution or hashing

int main(int argc, char const *argv[])
{
   fact[0]=fact[1]=1;
   for (int i = 2; i < N; i++)
   {
    fact[i]=(fact[i-1]*i)%M;
   }
   int t;
   cin>>t;
   while (t--)
   {
    int x;cin>>x;
    cout<<fact[x]<<endl;
   }
   
   
    
    
    return 0;
}

// Q.2- Given the size of N queries.Given Q query and in each query given a number x print count of the 
// number in the array. 

int main(int argc, char const *argv[])
{
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
       hsh[a[i]]++;
    }
    int q;cin>>q;
    while (q--)
    {
        int x;cin>>x;
        cout<<hsh[x]<<endl;
    }
    
    
    
    return 0;
}

