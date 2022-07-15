#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int r,c;cin>>r>>c;
    vector<int>v[r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int x;cin>>x;
            v[i].push_back(x);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        if (i%2==0)
        {
           for (int j = 0; j < c; j++)
           {
             cout<<v[i][j]<<" ";
           }
           cout<<endl;
           
        }else{
            for (int j = c-1; j >=0; j--)
           {
             cout<<v[i][j]<<" ";
           }
           cout<<endl;
        }
        
        
    }
    
    return 0;
}
