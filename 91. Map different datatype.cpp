#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>mp,mp2;
    mp.insert({1,"Abdullah"});
    mp.insert({2,"NISHAD"});
    mp.insert({3,"ziad"});
    mp.insert({4,"fahad"});

    mp2[0]="Rayhan";
    mp2[2]="Muaj";

    map<string,int,greater<string>>mp3;
    mp3["Takbir Ali"] = 420;
    mp3["Jahid"]=420;


    map<int,string>::iterator it;

    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" " <<it->second<<endl;
    }


    for(auto it2=mp2.begin(); it2!=mp2.end(); it2++)
    {
        cout<<it2->first<<" " <<it2->second<<endl;
    }

    for(auto it3=mp3.begin(); it3!=mp3.end(); it3++)
    {
        cout<<it3->first<<" " <<it3->second<<endl;
    }


}


