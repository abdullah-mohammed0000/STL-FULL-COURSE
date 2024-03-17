
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int>mp,mp1;
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,450});
    mp.insert({5,50});
    mp.insert({5,50});
    mp.insert({3,90});
    mp.insert({4,400});

    mp1=mp;



  for(auto ip: mp1)
  {
      cout<<ip.first<<" "<<ip.second<<endl;
  }

    cout<<endl;



}
