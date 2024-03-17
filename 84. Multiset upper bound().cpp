#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ms;
    ms.insert(3);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(5);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(5);

  auto it = ms.upper_bound(3);

for(auto it1=it; it1!=ms.end();it1++)
{
    cout<<*it1<<" ";
}

   cout<<endl;
}


