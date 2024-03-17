#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int,greater<int> >s;

   s.emplace(1);
   s.emplace(2);


    set<int>:: iterator it;
    for(it=s.begin();it!=s.end();it++)
    {

        cout<<*it<<" ";
    }
    cout<<endl;

}

