#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

// since this a bottom up code therfore it is always good to write this using recursion
// state: dp[i][j]=min no. of operation required to convert one string into another given the current ind of s1 is i and current ind of string 2 is j.
int dp[5001][5001];
int solve(string &s1, string &s2, int i, int j)
{
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    if (i == 0)
    {
        dp[i][j] = j;
        return dp[i][j];
    }
    else if (j == 0)
    {
        dp[i][j] = i;
        return dp[i][j];
    }
    else if (s1[i - 1] == s2[j - 1])
    {
        dp[i][j] = solve(s1, s2, i - 1, j - 1);
    }
    else
    {
        dp[i][j] = min(min(solve(s1, s2, i - 1, j - 1), solve(s1, s2, i, j - 1)), solve(s1, s2, i - 1, j)) + 1;
    }
    return dp[i][j];
}

int main(int argc, char const *argv[])
{
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i <= s1.length(); i++)
    {
        for (int j = 0; j <= s2.length(); j++)
        {
            dp[i][j] = -1;
        }
    }
   cout<< solve(s1, s2, s1.length(), s2.length())<<endl;
}
