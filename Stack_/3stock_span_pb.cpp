#include<bits/stdc++.h>
using namespace std;

// stock span pb

// given in this pb that there is an array and  each index is considered as the value of the stock and for every stock we have to print the max value of the consecutive stock smaller than it having index less than the present stock
// the value for the first stock is always 1

// e.g
//13 15 12 14 16 8  6 4 10 30
// 1 2  1   2  5 1  1  1 4 10


// naive sol
// int main(int argc, char const *argv[])
// {
//      int n;cin>>n;
//      vector<int>v(n);
//     for (int i = 0; i < n; i++)
//     {
//        cin>>v[i];
//     }
//     for (int i = 0; i <n ; i++)
//     {
//         int span =1;
//         for (int j = i-1; j >=0; j--)
//         {
//             if (v[i]>=v[j])
//             {
//                 span++;
//             }else{
//                 break;
//             }
            
//         }
//         cout<<span<<" ";
        
//     }
//     cout<<endl;
    

    
//     return 0;
// }

//efficient solution 

//O(n)

//using stack

int main(int argc, char const *argv[])
{
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    stack<int>st;
    st.push(0);
    cout<<1<<" ";
    for (int i = 1; i < n; i++)
    {
       while (st.empty()==false && v[st.top()]<=v[i])
       {
        st.pop();
       }
       int ans = st.empty()?i+1:i-st.top();
       cout<<ans<<endl;
       st.push(i);// the index of the second largest ele in the stack
       
    }
    

    
    return 0;
}

