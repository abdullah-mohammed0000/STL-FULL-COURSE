#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int>us,us1;
    us.insert(2);
    us.insert(5);
    us.insert(6);
    us.insert(1);
    us.insert(3);
 us.insert(1);
    us.insert(3);

  cout<<us.bucket_count()<<endl;
  cout<<us.count(3)<<endl;


}



