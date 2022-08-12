#include<bits/stdc++.h>
using namespace std;

//  the sieve of erosthosthenis is use to print all the prime number less then n

void SieveOfEra(int n){
    vector<bool>isPrime(n+1,true);
    for (int i = 2; i*i <=n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2*i; j <=n; j=j+i)
            {
               isPrime[j]=false;
            }
            
        }
        
    }
    for (int i = 2; i <=n; i++)
    {
        if (isPrime[i])
        {
            cout<<i<<" ";
            
        }
        
    }
    cout<<endl;
    

}
int main(int argc, char const *argv[])
{
    int n;cin>>n;
    SieveOfEra(n);
    
    return 0;
}
