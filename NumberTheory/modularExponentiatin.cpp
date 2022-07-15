#include <iostream>
#define ll long long
using namespace std;
 
/* Iterative Function to calculate (x^y)%p in O(log y) */
int powermodM(ll x,ll y, ll m)
{
    int res = 1;     // Initialize result
 
    x = x % m; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % m;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % m;
    }
    return res;
}
 
// Driver code
int main()
{
    ll x = 2;
    ll y = 5;
    ll m = 13;
    cout <<  powermodM(x, y, m);
    return 0;
}