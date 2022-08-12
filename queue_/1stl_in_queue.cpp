#include<bits/stdc++.h>
using namespace std;


// queue works on the principle of FIFO

// eg pipe  THE WATER THAT ENTERS THE FIRST WILL COME OUT FIRST



int main(int argc, char const *argv[])
{

    //insertion - push() => insertion in queue always takes place in back

    //deletion - pop()=> deletion in queue always takes place from front

    //front(),back(),empty(),size();

    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    
    while (q.empty()==false)
    {
        cout<<q.front()<<" "<<q.back()<<endl;
        q.pop();
    }
    cout<<q.size();// 0

   
    return 0;
}
