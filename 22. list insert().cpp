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

    li.insert(li.end(),6);
    li.insert(li.begin(),0);

    for(auto it:li)
    {
        cout<<it<<" ";
    }
    cout<<endl;

list<int>::iterator it;
it = li.begin();
advance(it,3);
li.insert(it,3);

    for(auto it:li)
    {
        cout<<it<<" ";
    }
    cout<<endl;

it = li.begin();
advance(it,6);
li.insert(it,6,41);

  for(auto it:li)
    {
        cout<<it<<" ";
    }
    cout<<endl;

}

