#include<bits/stdc++.h>
using namespace std;

// approach 1 

// tc : O(N)
//sc: Q(N);

// int main(int argc, char const *argv[])
// {
//     string s;cin>>s;
//     string rev;
//     for (int i = s.size()-1; i >=0; i--)
//     {
//         rev.push_back(s[i]);
//     }
//     if (rev==s)
//     {
//         cout<<"is_palindrome";
//     }else{
//         cout<<"no"<<endl;
//     }
    
    
    
//     return 0;
// }


///approach 2:

//time: avg : O(1);
//O(n);

//sc: O(1);

int main(int argc, char const *argv[])
{
    string s;cin>>s;
   
   int i=0,j=s.size()-1;
   bool pass = true;
   while (i<=j)
   {
     if (s[i]!=s[j])
     {
        pass=false;
        
       break;
     }
     i++;
     j--;
     
   }
   if (pass)
   {
    cout<<"is_palindrome";
   }else{
    cout<<"no"<<endl;
   }
   
    
    
    return 0;
}
