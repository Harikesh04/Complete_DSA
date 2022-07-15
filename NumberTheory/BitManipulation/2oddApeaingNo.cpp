#include <bits/stdc++.h>
using namespace std;

//two odd ocurring number.



int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];int lSetBit = res & ~(res - 1);
        res = res ^ v[i];
    }
    int lSetBit = res & ~(res - 1);//this is the way for calculating last set bit of the number.
    //this will return the number in which we will the only set bit is the last bit of the no. whose right most bit we were searching .
    int g1 = 0, g2 = 0;
    //here we are creating two groups on the basis of the last set bit of the xor of the array.
    for (int i = 0; i < n; i++)
    {
        if ((v[i] & lSetBit) != 0)
        {
            g1 = g1 ^ v[i];
            //if the last set bit of the ar[i] is ** not set then we will but it in g1.
          //  and doing xor of the group.so that the only no. of odd occurence will be left in both the groups.
        }
        else
        {
            g2 = g2 ^ v[i];
            //if the last set bit of the ar[i] is ** set then we will but it in g1.
        }
    }
    cout << g1 << " " << g2 << endl;

    return 0;
}