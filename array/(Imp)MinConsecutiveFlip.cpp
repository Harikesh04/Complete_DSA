#include <bits/stdc++.h>
using namespace std;

//here in this probelm we have given a bimary array e.g 1 1 0 0 1 1 0 0 1 1 we have to 
// print the min no of concecutive elem we have to flip to make the array same .
// we can only flip either the number of zeroes in the row or no of col in the row .


//Approach
//1. ar[0]!=ar[n-1] the diff in the rows of 0 and 1 is 0. in this case we can flip any of 0 or 1.
//2.ar[0]==ar[n-1] the diff in the rows of 0 and 1 is 1.in this case we can flip only the second occuring number either it will be zerro of 1..
void minConcecutiveFlip(int ar[],int n)
{
    for (int i = 1; i < n; i++)
    {
        if (ar[i]!=ar[i-1])// it means new group started
        {
            if (ar[i]!=ar[0])//it will check that the curr row is the row of second occ ele
            {
               cout<<"flip from "<<i<<"to"<<" ";
            }else{
                cout<<i-1<<endl;
            }
            
        }
        if (ar[n-1]!=ar[0])// this will check when last ele not equal to first it will be the ending statement for that.
        {
            cout<<n-1<<endl;
        }
        
    }
    
      
      

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    minConcecutiveFlip(ar,n);

   

   
    return 0;
}