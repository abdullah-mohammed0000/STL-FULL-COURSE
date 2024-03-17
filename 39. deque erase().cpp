#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
     dq.push_back(4);
    dq.push_back(5);
    dq.push_back(6);

    deque<int>::iterator it,it2;
    it = dq.begin();
    it2 = dq.begin()+3;
    //advance(it2,3);
    dq.erase(it,it2);

    for(int i=0;i<dq.size();i++)
   {
       cout<<dq.at(i)<<" ";

   }
   cout<<endl;
}
