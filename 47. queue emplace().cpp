#include<bits/stdc++.h>
using namespace std;
int main()
{

    queue<int>q;
    q.emplace(1);
    q.emplace(2);
    q.emplace(3);


  while(q.size()>0)
  {
      cout<<q.front()<<" ";
      q.pop();

  }

  cout<<endl;

}
