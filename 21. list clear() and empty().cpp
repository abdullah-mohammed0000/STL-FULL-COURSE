#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li;
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);
    li.push_front(2);
    li.push_front(1);

    for(auto it:li)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    if(li.empty())
        cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;

    li.clear();

    for(auto it:li)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    if(li.empty())
        cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;

}
