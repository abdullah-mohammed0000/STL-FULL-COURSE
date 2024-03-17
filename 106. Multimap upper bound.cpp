#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int>mp;
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,450});
    mp.insert({5,50});
    mp.insert({5,50});
    mp.insert({3,90});
    mp.insert({4,400});

  auto it = mp.upper_bound(4);

  for(auto it1=it;it1!=mp.end();it1++ )
{cout<<(it1)->first<<" " <<(it1)->second<<endl;}

    cout<<endl;



}

