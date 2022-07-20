#include<bits/stdc++.h>
using namespace std;

// this will work only when all the character in the string have distinct characters
// eg ABCDABCBABCDEABCDEA
//ABCD

// here i is pointing to s1 and j is poiting to s2.
int main(int argc, char const *argv[])
{
    string s1,s2;cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
   
    for (int i = 0; i <n-m+1;)
    {
         int j=0;
         for ( j = 0; j < m; j++)
         {
           if (s2[j]!= s1[i+j])
           {
             break;
           }
           
         }
         if (j==m)
         {
            cout<<i<<" ";
         }
         if (j==0)// if first char of both string mismatch then i++;
         {
            i++;
         }else{ // if any other char other than first mismatch then i+=j because it will not be similar till j char since because till jth char both strings subarray are not same.
            i=i+j;
         }
         
      
    }
    
    return 0;
}
