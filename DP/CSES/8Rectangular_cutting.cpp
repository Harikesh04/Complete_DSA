#include <bits/stdc++.h>
using namespace std;
int dp[501][501];

//state: dp[i][j]= min no. of cuts required to make rectangle of dimension(i,j) to square.

//transition:
// 1. we can put cut both horizontaly or vertically 
// 2. we can put cut anywhere between 0->i or 0->j

//base case: if i==j dp[i][j]=0;

//fs: dp[r][c];



int main(int argc, char const *argv[])
{
    int r, c;
    cin >> r >> c;
   
    int x, y;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            dp[i][j]=INT_MAX;
            if (i==0 || j==0)
            {
                dp[i][j]=INT_MAX;
            }
            
           else if (i == j)
            {
                dp[i][j] = 0;
                //when box is a sq.
            }
            else
            {

                for (int k = 1; k < i; k++)
                {
                    dp[i][j] = min(dp[i][j], 1 + dp[k][j] + dp[i - k][j]);
                    //here when we put cut vertically than after cut we will get two box 1.(k,j) and 2.(i-k,j) and we will add cuts of both the boxes plus 1(current cut).
                }
                for (int k = 1; k < j; k++)
                {
                    dp[i][j] = min(dp[i][j], 1 + dp[i][j - k] + dp[i][k]);
                    //here when we put cut horitontal than after cut we will get two box 1.(i,k) and 2.(i,j-k) and we will add cuts of both the boxes plus 1(current cut).
                }
            }
        }
    }

    cout<<dp[r][c]<<endl;

    return 0;
}
