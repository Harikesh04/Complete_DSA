#include<bits/stdc++.h>
using namespace std;

 int LCS(string &text1,string &text2,int n,int m,vector<vector<int>>&ar){
        if(ar[n][m]!=-1){
            return ar[n][m];
        }   
        
        if(n==0||m==0){
            ar[n][m]=0;
        }
        else 
        {if(text1[n-1]==text2[m-1]){
            ar[n][m]= 1+LCS(text1,text2,n-1,m-1,ar);
          
        }
        else{
           ar[n][m]= max(LCS(text1,text2,n,m-1,ar),LCS(text1,text2,n-1,m,ar));
         }
              
             }
        return ar[n][m];
        
    }

int main(int argc, char const *argv[])
{
    string s1,s2;cin>>s1,s2;
    int n= s1.size();
    int m=s2.size();
    vector<vector<int>>ar(n+1,vector<int>(n+1,-1));
    cout<<LCS(s1,s2,n,m,ar);
    
    return 0;
}
