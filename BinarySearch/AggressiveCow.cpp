#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 10;
ll n;
ll c;
ll Stall[N];
// TTTTTTFFFFF

bool canPlace(ll d)
{
    sort(Stall,Stall+n);
    ll cows_cnt = c;
    ll lastPos = -1;
    for (int i = 0; i < n; i++)
    {
        if ((Stall[i] - lastPos) >= d || lastPos == -1)
        {
            cows_cnt--;
            lastPos = Stall[i];
        }
        if (cows_cnt == 0)
        {
           break;
        }
    }
     if (cows_cnt == 0)
        {
            return true;
        }
    return false;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> c;
        for (int i = 0; i < n; i++)
        {
            cin >> Stall[i];
        }
        ll lo = 0, hi = 1e9, mid;
        while (hi - lo > 1)
        {
            mid = (lo + hi) / 2;
            if (canPlace(mid))
            {
                lo = mid;
            }
            else
            {
                hi = mid - 1;
            }
        }
        if (canPlace(hi))
        {
            cout << hi << endl;
        }
        else
        {
            cout << lo << endl;
        }
    }

    return 0;
}
