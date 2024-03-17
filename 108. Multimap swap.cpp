#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int>mp,mp1;
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});

mp1.insert({2,400});
mp1.insert({4,600});
mp.swap(mp1);

 for(auto it: mp)
 {
     cout<<it.first<<" "<<it.second<<endl;
 }

    cout<<endl;



}


