#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string oldHandle, newHandle;
    map<string, string> mymap;
    map<string, string>::iterator itr;
    for (int i = 0; i < n; i++)
    {
        cin >> oldHandle >> newHandle;
        itr = mymap.find(oldHandle);
        if (itr != mymap.end())
        {
            oldHandle = itr->second;
            mymap.erase(itr);
            mymap[newHandle] = oldHandle;
        }
        else
        {
            mymap[newHandle] = oldHandle;   
        }
    }

    cout<<mymap.size()<<"\n";
    for (itr = mymap.begin(); itr != mymap.end(); itr++) {
        cout<<itr->second<<" "<<itr->first<<"\n";
    }
}