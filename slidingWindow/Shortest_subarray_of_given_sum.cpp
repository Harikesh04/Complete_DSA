#include <bits/stdc++.h>
#define ll long long
using namespace std;

int minSubArrayLen(int target, vector<int> &nums)
{
    int k = target;
    int n = nums.size(); // given condition for sum
    int i = 0, j = 0;
    int mn = INT_MAX;
    int sum = 0;
    while (j < n)
    {
        sum = sum + nums[j]; // calculation
        if (sum < k)         // when sum is less than the given condition
        {
            j++;
        }
        else
        {
            while (sum >= target)
            {
                mn = min(mn, j - i + 1);
                sum -= nums[i];
                i++;
            }
            j++;
        }
    }

    if (mn == INT_MAX)
    {
        return 0;
    }
    return mn;
}

