#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});

  auto it = mp.upper_bound(20);

  for(auto it1=it;it1!=mp.end();it1++ )
{cout<<(it1)->first<<" " <<(it1)->second<<endl;}

    cout<<endl;



}

