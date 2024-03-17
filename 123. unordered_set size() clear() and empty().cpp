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

    cout<<us.size()<<endl;


    us.clear();

    if(us.empty())cout<<"Empty"<<endl; else cout<<"Not Empty"<<endl;

}

