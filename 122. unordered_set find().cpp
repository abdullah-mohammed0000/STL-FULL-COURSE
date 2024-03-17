#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int>us;
    us.insert(2);
    us.insert(5);
    us.insert(6);
    us.insert(1);
    us.insert(3);

    auto it=us.find(7);

    if(it!=us.end())cout<<"Find"<<endl;
    else cout<<"NOt Find"<<endl;

}

