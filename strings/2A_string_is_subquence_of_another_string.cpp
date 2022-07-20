#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string &txt, string &ptn)
{
    int n = txt.size();
    int m = ptn.size();
    int j = 0; // pointing to the second string{the candidate of the subsequence}
    int i = 0;// pointing to the fist string
    while (i < n && j < m)
    {
        if (txt[i] == ptn[j])
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

bool isSubsequence_R(string &txt, string &ptn, int n, int m)
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

    if (txt[n - 1] == ptn[m - 1])
    {
        return isSubsequence_R(txt, ptn, n - 1, m - 1);
    }
    else
    {
        return isSubsequence_R(txt, ptn, n - 1, m);
    }
}

int main(int argc, char const *argv[])
{
    string txt, ptn;
    cin >> txt >> ptn;
    // cout<<isSubsequence(txt, ptn);
    cout << isSubsequence_R(txt, ptn, txt.size(), ptn.size());
    return 0;
}
