#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    string s, t;
    int age;
    map<string, map<int, string>> mymap;
    for(int i = 0; i < n; i++)
    {
        cin>>t;
        mymap[t].insert(make_pair(-1,"NULL"));
    }
    for(int i = 0; i < m; i++)
    {
        cin>>t>>s>>age;
        mymap[t].insert(make_pair(age,s));
    }
    map<string, map<int, string>>::iterator i;
    map<int, string>::iterator j;
    for(i = mymap.begin(); i != mymap.end(); i++)
    {
        cout<<i->first<<endl;
        for(j = (i->second).begin(); j != (i->second).end(); j++)
        {
        	if(j->first != -1 && j->second != "NULL")
        	{
        		cout<<j->second<<" "<<j->first<<endl;
        	}
        }
    }
    return 0;
}