
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multimap<int,int>ump;

    ump.insert({6,20});

    ump.insert({1,20});

    ump.insert({8,30});

    ump.insert({16,1});

    ump.insert({45,200});

    ump.insert({64,2022});

     ump.insert({6,20});

      ump.insert({6,20});



    cout<<ump.count(6)<<endl;

}


