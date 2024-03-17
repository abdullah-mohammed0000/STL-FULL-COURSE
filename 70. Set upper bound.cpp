#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s={1,2,3,4,5,6};

    for(auto it:s)cout<<it<<" ";
    cout<<endl;

    set<int>:: iterator it;
    it = s.upper_bound(1);

    if(it==s.end())
    {
        cout<<"The Element is larger to the greater element"<<endl;
    }
    else

    {
        cout<<"The upper bound of 1 is: "<<*it<<endl;
    }

}

