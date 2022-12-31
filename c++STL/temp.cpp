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
//  int n=s[i]-'0';
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

// best way to make a 2D array is using vector of vector i.e vector<int>v[3]; where 3 is number of rows .
ll power(ll x, ll n)
{
    ll res = 1;
    while (n)
    {
        if (n % 2)
        {
            res = res * x;
            n--;
        }
        else
        {
            x = x * x;
            n = n / 2;
        }
    }
    return res;
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
bool IsPalindrome(const string &str)
{
    if (str.empty())
        return false;

    int i = 0;                // first characters
    int j = str.length() - 1; // last character

    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string removeDuplicatesFromString(string str)
{

    // keeps track of visited characters
    int counter = 0;

    int i = 0;
    int size = str.size();

    // gets character value
    int x;

    // keeps track of length of resultant string
    int length = 0;

    while (i < size)
    {
        x = str[i] - 97;

        // check if Xth bit of counter is unset
        if ((counter & (1 << x)) == 0)
        {

            str[length] = 'a' + x;

            // mark current character as visited
            counter = counter | (1 << x);

            length++;
        }
        i++;
    }

    return str.substr(0, length);
}
string removeCharacters(string S, char c)
{

    S.erase(remove(
                S.begin(), S.end(), c),
            S.end());

    return S;
}

void solve()
{
   int x=64;
   int y = __builtin_popcount(x);
   cout<<y<<endl;
    
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

// important stl functions
// ll max= *max_element(v.begin(),v.end());
// ll min= *min_element(v.begin(),v.end());
// ll sum = accumulate(v.begin(),v.end(),0);here 0 is initial sum
// ll cnt = count(v.begin(),v.end(),2);
// auto it = find(v.begin(),v.end(),10)
// if (it!=v.end())
// {
//   cout<<*it<<endl
// }
// reverse(v.begin(),v.end())

// find min frequency of an element in a map
// ll mn = INT_MAX;
// for (auto x : mpp)
// {
//     mn = min(x.second, mn);
// }
// max frequency of an element in a map
// ll mx = INT_MIN;
//     for (auto x : m)
//     {
//         mx = max(x.second, mx);
//     }