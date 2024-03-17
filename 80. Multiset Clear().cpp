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

   multiset<int>:: iterator it,it2;
   it=ms.begin();
   it2=ms.begin();
   advance(it2,2);
   ms.erase(it,it2);

   for(it=ms.begin();it!=ms.end();it++)
   {
       cout<<*it<<" ";

   }

   cout<<endl;
}


