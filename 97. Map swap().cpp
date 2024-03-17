#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp,mp1;
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});

mp1[2]=434;
mp1[4]=43;
mp.swap(mp1);

 for(auto it: mp)
 {
     cout<<it.first<<" "<<it.second<<endl;
 }

    cout<<endl;



}

