#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    set<int>::iterator it;
    it=s.begin();
    advance(it,2);
    s.erase(it);


    for(it=s.begin(); it!=s.end(); it++)
    {

        cout<<*it<<" ";
    }
    cout<<endl;


}


