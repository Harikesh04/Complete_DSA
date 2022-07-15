#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string &s1, string &s2)
{
    int n = s1.size();
    int m = s2.size();
    int j = 0; // pointing to the second string
    int i = 0;
    while (i < n && j < m)
    {
        if (s1[i] == s2[j])
        {
            j++;
            i++;
        }
        else
        {
            i++;
        }
    }
    return (j == m);

    // TC: O(N+M);
    // SC:O(1);
}

// 2.

// recursive approach

bool isSubsequence_R(string &s1, string &s2, int n, int m)
{
    if (m == 0)
    {
        return true;
    }
    if (n == 0)
    {
        return false;
    }
    if (n < m)
    {
        return false;
    }

    if (s1[n - 1] == s2[m - 1])
    {
        return isSubsequence_R(s1, s2, n - 1, m - 1);
    }
    else
    {
        return isSubsequence_R(s1, s2, n - 1, m);
    }
}

int main(int argc, char const *argv[])
{
    string s1, s2;
    cin >> s1 >> s2;
    // cout<<isSubsequence(s1, s2);
    cout << isSubsequence_R(s1, s2, s1.size(), s2.size());
    return 0;
}
