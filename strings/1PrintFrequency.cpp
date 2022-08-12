#include<bits/stdc++.h>
using namespace std;

// print frequency of character (in sorted order) in a string of lower case alphabet.


//approach 1 using map


// int main(int argc, char const *argv[])
// {
//     string s;cin>>s;
//     map<char,int>m;
//     for (int i = 0; i < s.size(); i++)
//     {
//        m[s[i]]++;
//     }
//     for(auto it:m){
//         cout<<it.first<<" "<<it.second<<endl;
//     }
    
    
    
//     return 0;
// }

// time comp: O(nlogn)


//2 Optimised approach 

// since the char is in from a to z i.e 26 char therefore store in map only 1 to 26

int main(int argc, char const *argv[])
{
    string s;cin>>s;
    int ar[26]={0};
    for (int i = 0; i < s.size(); i++)
    {
        ar[s[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (ar[i]>0)
        {
            cout<<char(i+'a')<<" "<<"count of char is "<<ar[i]<<endl;
        }
        
       
    }
    
    
    return 0;
}

//here time complexity is O(n) which is better than O(nlogn).