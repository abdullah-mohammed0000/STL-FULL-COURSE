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
    us.insert(3);


    unordered_set<int>::iterator it;

    for(it=us.begin(); it!=us.end(); it++)
    {
        cout<<*it<<" ";
    }


    cout<<endl;

    cout<<us.count(3)<<endl;

}
