#include <bits/stdc++.h>
using namespace std;


//Approach:

// since there is total 32 bits in an unsigned int starting form 0 to 31
// we will start traversing from 31st bit and will check that if 31st bit is set or not.
// the first time we got the set bit there after if the bit will be set we will print else
// we will not.

int main()
{

    int n;
    cin >> n;

    bool flag = false;
    for (int i = 31; i >= 0; i--)
    {
        int mask = (1 << i);//mask to check that ith bit is set or not

        if (flag)
        {
            //after getting first set bit
            if ((n & mask) != 0)
            {
                cout << 1 << " ";//ith bit is set so 1
                
            }else{
                cout<<0<<" ";//it bit is not set so 0
            }
        }
        else
        {
            if ((n & mask) != 0)
            {
                cout << 1 << " ";
                flag = true;//we got our first set bit
            }else{

            }
        }
    }
    cout<<endl;
    return 0;
}