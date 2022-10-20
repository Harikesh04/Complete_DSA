#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
using namespace std;


//dp recurrence: for solving subarray and subseq problem in dp thing about the approach like the best subarray and the subseq till is till i.

// now make reccurence super easy
int main()
{

    string s1, s2;

    cin >> s1 >> s2;
    int n = s1.size(), m = s2.size();

    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof dp);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s1[i] == s2[j])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max((i - 1 >= 0 && j - 1 >= 0 ? dp[i - 1][j - 1] : 0), max((i - 1 >= 0 ? dp[i - 1][j] : 0), (j - 1 >= 0 ? dp[i][j - 1] : 0)));
            }
        }
    }

    cout << dp[n - 1][m - 1];
}