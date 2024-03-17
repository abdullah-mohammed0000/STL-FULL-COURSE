#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);

vector<int>b;
b.push_back(6);
b.push_back(7);
b.push_back(8);

cout<<"Befor Swapping"<<endl;
cout<<"v"<<" = "<<" ";
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
cout<<"b"<<" = "<<" ";
for(int i=0;i<b.size();i++)
{
    cout<<b[i]<<" ";
}
cout<<endl;

swap(v,b);
cout<<"After Swapping"<<endl;
cout<<"v"<<" = "<<" ";
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
cout<<"b"<<" = "<<" ";
for(int i=0;i<b.size();i++)
{
    cout<<b[i]<<" ";
}




}
