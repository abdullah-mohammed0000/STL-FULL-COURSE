#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    //dq.clear();

    for(int i=0;i<dq.size();i++)
   {
       cout<<dq.at(i)<<" ";

   }
   cout<<endl;

   if(dq.empty())cout<<"Empty"<<endl;
   else cout<<"Not Empty"<<endl;
}
