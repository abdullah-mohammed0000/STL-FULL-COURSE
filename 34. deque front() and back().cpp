#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);


    for(int i=0;i<dq.size();i++)
   {
       cout<<dq.at(i)<<" ";

   }
   cout<<endl;

   cout<<dq.front()<<endl;
   cout<<dq.back()<<endl;
}

