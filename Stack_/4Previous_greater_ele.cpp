#include <bits/stdc++.h>
using namespace std;

void previous_greater_ele(vector<int> &v)
{
    int n = v.size();
    stack<int> st;
    st.push(v[0]);
    cout << -1 << " ";
    for (int i = 1; i < n; i++)
    {
        while (st.empty() == false && st.top() <= v[i])
        {
            st.pop();
        }
        int ans = st.empty() ? -1 : st.top();
        cout << ans << " ";
        st.push(v[i]);
    }
    cout << endl;
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
    previous_greater_ele(v);

    return 0;
}
