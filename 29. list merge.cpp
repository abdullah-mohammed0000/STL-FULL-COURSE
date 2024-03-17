#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li={1,2,3,4,5,6},li2={7,8,9,10,11,12};
    li2.merge(li);
    for(auto it: li2)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<li.size()<<endl;
}
