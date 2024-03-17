#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>,rb_tree_tag, tree_order_statistics_node_update>

int main()
{

    ordered_set s;
    s.insert(1);
    s.insert(2);
    s.insert(30);
    s.insert(400);
    s.insert(5);

    int ans=s.order_of_key(5);
    cout<<ans<<endl;
}
