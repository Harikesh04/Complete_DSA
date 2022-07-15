#include <iostream>
#include <bits/stdc++.h>
#define ll long long
const ll mod = 1e9 + 7;
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define pi 3.141592653589793238
// cout<<fixed<<setprecision(10)<<ans<<endl;
// this will fix the number of zeroes till 10th place after the decimal
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

// **Important string stl
// 1.to convert string to int
// stoi(s);
// 2.to convert ith element of string to int for using calculation
//  (int(s[i]) - 48)
// 3. to convert integer to string
// to_string(s);

using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }
// sort(p.begin(),p.end(),sortbysec); call for soting the second vector by second element like this{increasing order }
bool sortbyseci(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// sort(p.begin(),p.end(),sortbysec); call for soting the second vector by second element like this{decreasing order}
bool sortbysecd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }

void printarr(ll arr[], ll n)
{
    fl(i, n) cout << arr[i] << " ";
    cout << "\n";
}
string decToBinary(int n)
{
    string s = "";
    int i = 0;
    while (n > 0)
    {
        s = to_string(n % 2) + s;
        n = n / 2;
        i++;
    }
    return s;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}
int mismatchBit(ll A, ll B)
{
    int count = 0;

    // since, the numbers are less than 2^31
    // run the loop from '0' to '31' only
    for (int i = 0; i < 32; i++)
    {

        // right shift both the numbers by 'i' and
        // check if the bit at the 0th position is different
        if (((A >> i) & 1) != ((B >> i) & 1))
        {
            count++;
        }
    }

    return count;
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
ll moduloMultiplication(ll a, ll b, ll mod)
{
    ll res = 0;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = (res + a) % mod;
        b >>= 1;
    }
    return res;
}
ll powermod(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}
////////////////
int countDistinct(string s)
{

    unordered_map<char, int> m;

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    return m.size();
}
void reverseStr(string &str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
void solve()
{
    string s;
    cin >> s;
    int t;
    cin >> t;
    int a[100005] = {0};
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == s[i])
        {
            a[i] = a[i - 1] + 1;
        }
        else
        {
            a[i] = a[i - 1];
        }
    }

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << a[y - 1] - a[x - 1] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    solve();
    return 0;
}