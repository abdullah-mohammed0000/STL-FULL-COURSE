#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s={1,2,3,4,5,6};

    for(auto it:s)cout<<it<<" ";
    cout<<endl;

    set<int>:: iterator it;
    it = s.lower_bound(5);

    if(it==s.end())
    {
        cout<<"The Element is larger to the greater element"<<endl;
    }
    else

    {
        cout<<"The lower bound of 5 is: "<<*it<<endl;
    }

}
