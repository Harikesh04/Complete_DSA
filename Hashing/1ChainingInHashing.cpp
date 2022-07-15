#include<bits/stdc++.h>
using namespace std;


// in hashing when we store thousands of data in some limited keys of indexing then collision occrs to prevent this 

// there are several method 

//1.chaining 

// here we use e.g key = int , and vector to prevent collision


int main(int argc, char const *argv[])
{
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    unordered_map<int,vector<int>>m;
    for (int i = 0; i < n; i++)
    {
        int x=v[i]%7;
        m[x].push_back(v[i]);
    }

   
        int x;
        cin>>x;

       if (m.find(x) != m.end())
       {
          int n=m[x].size();
          for (int i = 0; i < n; i++)
          {
            cout<<m[x][i]<<" ";
          }
          cout<<endl;
          auto  mx= *max_element(m[x].begin(),m[x].end());
          cout<<mx<<endl;
          cout<<endl;
       }
       
        
  
    
    
    
    return 0;
}
