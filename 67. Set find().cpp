 #include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    set<int>::iterator it;
    it=s.find(20);



    if(it!=s.end())cout<<"Find"<<endl;
    else cout<<"Not Find"<<endl;
    cout<<endl;


}
