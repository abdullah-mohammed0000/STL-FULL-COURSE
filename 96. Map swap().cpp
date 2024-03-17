#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp,mp1;
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});

    mp1=mp;

 for(auto it: mp1)
 {
     cout<<it.first<<" "<<it.second<<endl;
 }

    cout<<endl;



}

