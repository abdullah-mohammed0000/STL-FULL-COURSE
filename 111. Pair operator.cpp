 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,char>p,q;
    pair<int,string>t(1,"abdullah");
    pair<int,string>r(t);


    p.first=10;
    p.second='a';

   q=p;

    cout<<p.first<<" "<<p.second<<endl;
     cout<<q.first<<" "<<q.second<<endl;
      cout<<t.first<<" "<<t.second<<endl;
     cout<<r.first<<" "<<r.second<<endl;

}

