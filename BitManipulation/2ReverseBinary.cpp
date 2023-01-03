#include <bits/stdc++.h>
using namespace std;


//Approach:

// here j is moving from rightmostbit. (0th bit) when we got our first set bit of the number
// we will start setting up the bit of the rev and if after the first set bit the bit is unset then j will we incremented in both the cases  if the bit will be set it will
// be set in the rev else will do nothing.




int main()
{

    int n;
    cin >> n;

    bool flag = false;
    int j=0;
    int rev=0;
    for (int i = 31; i >= 0; i--)
    {
        int mask = (1 << i);//mask to check that ith bit is set or not

        if (flag)
        {
            //after getting first set bit
            if ((n & mask) != 0)
            {
                // cout << 1 << " ";//ith bit is set so 1
                int smask= 1<<j;
                rev=rev|smask;
                
                
            }else{
                // cout<<0<<" ";//it bit is not set so 0
            }
            j++;
        }
        else
        {
            if ((n & mask) != 0)
            {
                // out << 1 << " ";
                int smask= 1<<j;
                rev=rev|smask;
                j++;


                flag = true;//we got our first set bit
            }else{

            }
        }
    }
    cout<<rev;
    return 0;

    

}