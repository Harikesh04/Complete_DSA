#include <bits/stdc++.h>
#define ll long long
using namespace std;

// here condition is given and we have to find the longest size of the window

// this will not work when sum is 0.
int main(int argc, char const *argv[])
{
    int n ;cin>>n;
    vector<int>ar(n);
    for (int i = 0; i < n; i++)
    {
      cin>>ar[i];
    }
    int k;cin>>k;//sum;
    
    ll i = 0, j = 0;
    ll mx = INT_MIN;
    ll sum = 0;
    while (j < n)
    {
        sum = sum + ar[j]; //calculation
        if (sum < k) // when sum is less than the given condition
        {
            j++;
        }
        else if ((sum) == k) // when sum is equal to the given condition
        {
            mx = max(mx, (j - i + 1));

            j++;
        }
        else if (sum > k) //if sum is greater than the condition
        {
            while (sum > k)
            {
                sum -= ar[i];//making the sum smaller and sliding the window
                i++;
                if (sum == k)//updating the ans again
                {
                    mx = max(mx, (j - i + 1));
                }
                j++;//sliding the window
            }
        }
    }
    cout << mx << endl;//printing the ans

    return 0;
}
