#include<bits/stdc++.h>
using namespace std;
int main()
{

    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);

   //q.pop();
//cout<<q.front()<<endl;

    while(q.size()>0)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}

