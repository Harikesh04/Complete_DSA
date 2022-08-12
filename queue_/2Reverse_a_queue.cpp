#include <bits/stdc++.h>
using namespace std;

// 1. iterative approach

// tc: O(n);
// but it takes extra space of the stack

// int main(int argc, char const *argv[])
// {
//     queue<int> q;
//     stack<int> st;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         q.push(x);
//     }
//     while (q.empty() == false)
//     {
//         st.push(q.front());
//         q.pop();
//     }
//     while (st.empty() == false)
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }

//     return 0;
// }

// reversing the queue without the help of making stack but here the program will use callstack that is inbuilt stack

void reverse(queue<int> &q)
{
    if (q.empty() )
    {
        return;
    }

    int x = q.front();
    q.pop();
    reverse(q);
    q.push(x);
}

int main(int argc, char const *argv[])
{
    queue<int> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    reverse(q);
    while (q.empty()==false)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    

    return 0;
}
