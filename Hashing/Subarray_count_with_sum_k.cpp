#include<bits/stdc++.h>
using namespace std;


// in hashing when we store thousands of data in some limited keys of indexing then collision occrs to prevent this 

// there are several method 

//1.chaining 

// here we use e.g key = int , and vector to prevent collision

 int subarraySum(vector<int>& v, int k) {
        int n= v.size();
        int pfsum=0;
        int res=0;
        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++){
            pfsum+=v[i];
            if(pfsum==k){
                res++;
            }
             if(m.find(pfsum-k) !=  m.end())
            {
                res += m[pfsum-k];
            }
            m[pfsum]+=1;
            
            
        }
        return res;
        
        
    }
int main(int argc, char const *argv[])
{
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    subarraySum(v,k);
    
    
    return 0;
}
