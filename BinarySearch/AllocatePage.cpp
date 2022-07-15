#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// here we have to allocate pages to the studends such that  max of  each student recieve the book is min.
// min of max no. of pages allocated to the student is when k==n and each student will recieve single bool i.e max of all the array

// max no. of pages  a student can be allocated when there is only one student i.e sum of all the pages.

// so our ans will lie in the rangle of [mx,sum];

// condition form will be TTTTFFFF.

// we have to return the min one

bool is_Allocated(vector<ll>v,ll ans,ll student){
    int n=v.size();
    int sum=0;
    int std=1;
    for (int i = 0; i < n; i++)
    {
       if ((sum+v[i])>ans)
       {
        std++;
        sum=v[i];
       }else{
        sum+=v[i];
       }
       
    }
    if (std==student)
    {
        return true;
    }
    return false;
    
    
}

int main(int argc, char const *argv[])
{
    ll n;cin>>n;
    vector<ll>v(n);
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    ll k;cin>>k;//no. of students
    ll lo=*max_element(v.begin(),v.end());
    ll hi=sum;
    ll res=0;
    while (lo<=hi)//lo<=hi is imp
    {
        ll mid = (lo+hi)/2;
        if(is_Allocated(v,mid,k)){
            res=mid;
            hi=mid-1;
        }else{
            lo=mid+1;
        }

    }
    cout<<res<<endl;
    
    


    

    
    return 0;
}
