#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});

    mp.erase(1);

    for(auto ip: mp)
    {
        cout<<ip.first<<" "<<ip.second<<endl;

    }

    cout<<endl;



}

