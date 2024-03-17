#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>li;
   li.push_back(3);
   li.push_back(4);
   li.push_back(5);
   li.push_front(2);
   li.push_front(1);

   li.pop_front();
  list<int>:: iterator it;
  for(it=li.begin();it!=li.end();it++)
  {
      cout<<*it<<" ";
  }
cout<<endl;

li.pop_back();
for(auto it: li)
{
    cout<<it<<" ";
}
cout<<endl;


}

