#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int>ump;
    ump[1]=10;
    ump[2]=20;
    ump[3]=10;
    ump[4]=20;
    ump[5]=10;
    ump[6]=20;

  for(auto it=ump.begin(); it!=ump.end();it++)
  {
      cout<<(*it).first<<" "<<(*it).second<<endl;

  }

  cout<<ump.bucket_count()<<endl;


}



