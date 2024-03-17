#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s={1,2,3,4,5},s1={6,7,8,9,10};
   s1.swap(s);


    set<int>:: iterator it;
    for(it=s.begin();it!=s.end();it++)
    {

        cout<<*it<<" ";
    }
    cout<<endl;

}

