#include<bits/stdc++.h>
using namespace std;
int main()
{

    priority_queue<int>pq,pq2;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq2.push(4);
    pq2.push(5);
    pq2.push(6);

 pq.swap(pq2);



   while(pq.size()>0)
   {
       cout<<pq.top()<<endl;
       pq.pop();
   }
   cout<<endl;
}


