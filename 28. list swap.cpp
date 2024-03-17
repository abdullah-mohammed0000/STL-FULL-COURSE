#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li={1,2,3,4,5,6},li2={7,8,9,10,11,12};
    li.swap(li2);
    for(auto it: li)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    for(auto it: li2)cout<<it<<" ";
    cout<<endl;
}
