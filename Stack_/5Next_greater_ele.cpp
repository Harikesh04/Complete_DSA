#include<bits/stdc++.h>
using namespace std;

void next_greater_ele(vector<int>&v){
     int n = v.size();
     vector<int>res;
    stack<int> st;
    st.push(v[n-1]);
    res.push_back(-1);
    for (int i = n-2; i>=0; i--)
    {
        while (st.empty() == false && st.top() <= v[i])
        {
            st.pop();
        }
        int ans = st.empty() ? -1 : st.top();
        res.push_back(ans);
        
        st.push(v[i]);
    }
   reverse(res.begin(),res.end());
   for (int i = 0; i < res.size(); i++)
   {
     cout<<res[i]<<" ";
   }
   cout<<endl;
   
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    next_greater_ele(v);

    return 0;
}
