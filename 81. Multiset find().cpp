#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(5);

  auto it = ms.find(3);


 if(it==ms.end())cout<<"Not Find"<<endl;
 else cout<<"Find"<<endl;
   cout<<endl;
}



