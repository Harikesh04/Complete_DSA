#include <bits/stdc++.h>
using namespace std;

// given two strings s1 and s2. you have to convert s1 to s2 you can do inset,delete,replace operation on any of the caracter of the s1 to make it similar to s2.

//dp[i][j]= edit distance of s1[0....i-1] and s2[0...j-1];
int ED(string s1, string s2, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[0][i] = i;
    }
    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = i;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
            }
        }
    }
    return dp[m][n];
}

int main(int argc, char const *argv[])
{
    string s1, s2;
    cin >> s1 >> s2;

    cout << ED(s1, s2, s1.size(), s1.size());
    return 0;
}
