#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});

  auto it = mp.find(2);

   if(it!=mp.end())cout<<"F"<<endl;
   else cout<<"N F"<<endl;

    cout<<endl;



}


