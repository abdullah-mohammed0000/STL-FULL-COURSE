#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li={1,2,3,4,5,6,2,2,2,2};
    li.remove(2);
    for(auto it: li)
    {
        cout<<it<<" ";
    }
    cout<<endl;

}
