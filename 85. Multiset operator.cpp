#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ms,ms2;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(5);

    ms2.insert(6);
    ms2.insert(6);
    ms2.insert(6);
    ms2.insert(6);
    ms2.insert(6);

    ms.swap(ms2);

    multiset<int>:: iterator it;

   for(it=ms.begin();it!=ms.end();it++)

   {
       cout<<*it<<" ";

   }

   cout<<endl;
}
