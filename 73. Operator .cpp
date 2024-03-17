#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s={1,2,3,4,5},s1;
   s1=s;


    set<int>:: iterator it;
    for(it=s1.begin();it!=s1.end();it++)
    {

        cout<<*it<<" ";
    }
    cout<<endl;

}

