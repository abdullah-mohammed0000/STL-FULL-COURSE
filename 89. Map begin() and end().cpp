#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});
    mp.insert({4,80});

    cout<<mp.size()<<endl;
    cout<<mp.max_size()<<endl;
    cout<<mp.count(4)<<endl;

    map<int,int>::iterator it;

    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" " <<it->second<<endl;
    }

}

