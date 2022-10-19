#include <bits/stdc++.h>
using namespace std;


// given two strings s1 and s2. you have to convert s1 to s2 you can do inset,delete,replace operation on any of the caracter of the s1 to make it similar to s2.

// Recursive approach

// ED(s1,s2,m-1,n-1) - replacing the char of s1 now in both string last char become same there count will dec in both string
// ED(s1,s2,m,n-1) insert the char in s1 therefore s1 size will inc by 1 and last char of both string will be equal therefore remove.
// ED(s1,s2,m-1,n)- deleting the char of s1.
int ED(string s1, string s2, int m, int n)
{

    if (m == 0)
    {
        return n; // if s1 is empty then insert all the char of s2 therefore will return the n
    }
    if (n == 0)
    {
        return m; // if s2 is empty then delete all the char of s1, therefore will return m;
    }

    if (s1[m - 1] == s2[n - 1])
    {
        return ED(s1, s2, m - 1, n - 1);
    }
    else
    {
        return 1 + min(min(ED(s1, s2, m - 1, n - 1), ED(s1, s2, m, n - 1)), ED(s1, s2, m - 1, n));
    }
}

int main(int argc, char const *argv[])
{
    string s1, s2;
    cin >> s1 >> s2;
    int m=s1.size();
    int n=s2.size();
    cout<<ED(s1, s2,m ,n); 
    return 0;
}
