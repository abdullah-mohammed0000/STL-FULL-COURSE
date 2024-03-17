#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li={1,1,1,1,2,3,4,5,6,1,1,1,3,3,3};
    li.unique();
    for(auto it: li)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

