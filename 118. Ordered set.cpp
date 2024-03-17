#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace _gnu_pbds;

#define ordered_set tree<int, null_type, less<int>,

int main()
{

    ordered_set s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    int ans=s.order_of_key(3);
    cout<<ans<<endl;
}
