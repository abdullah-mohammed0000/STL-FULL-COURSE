#include<bits/stdc++.h>
using namespace std;
int main()
{

    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);

   pq.pop();
  cout<<pq.top()<<endl;

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();

    }
}


