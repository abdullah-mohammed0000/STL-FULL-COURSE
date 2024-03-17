#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int>ums;
    ums.insert(2);
    ums.insert(5);
    ums.insert(6);
    ums.insert(1);
    ums.insert(3);


 for(auto it: ums)cout<<it<<" ";
    cout<<endl;


}

