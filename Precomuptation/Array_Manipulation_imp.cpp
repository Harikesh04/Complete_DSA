#include<bits/stdc++.h>
using namespace std;
const long long int N=1e7+10;// we can not intialize these big array in main we have to declare it globally
long long int ar[N];
long long int pf[N];


// here given an array of size n with all ele 0 . you are given q queries and in each query we have to add k to each ele in between l to r.





int main(int argc, char const *argv[])
{
    int n;cin>>n;
    int q;cin>>q;
    while (q--)
    {
            int l,r,k;
            cin>>l>>r>>k;
            ar[l]=ar[l]+k;
            ar[r+1]=ar[r+1]-k;

    }

    // now calculating pf sum of the arr
    pf[0]=ar[0];
    for (int i = 1; i < N; i++)
    {
        pf[i]=pf[i-1]+ar[i];
    }
    int mx= *max_element(pf,pf+N);
    cout<<mx<<endl;
    

    
    return 0;
}
