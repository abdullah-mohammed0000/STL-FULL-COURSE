#include<bits/stdc++.h>
using namespace std;
int main()
{

    queue<int>q,q2;
    q.push(1);
    q.push(2);
    q.push(3);
    q2.push(4);
    q2.push(5);
    q2.push(6);

    q.swap(q2);

    while(q.size()>0)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
