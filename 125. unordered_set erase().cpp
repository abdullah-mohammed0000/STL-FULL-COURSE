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
us.erase(5);

    for(auto it: us)cout<<it<<" ";


}

