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


  cout<<ump.bucket_size(0)<<endl;


}




