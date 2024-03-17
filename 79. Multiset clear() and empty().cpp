#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(5);

   ms.clear();

   if(ms.empty())cout<<"Empty"<<endl;
   else cout<<"Not Empty"<<endl;
}


