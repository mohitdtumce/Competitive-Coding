#include <bits/stdc++.h>
using namespace std;
// int hash[26];
// string findHash(string str)
// {
//     string res = "";
//     hash = {};
//     for(int i = 0; i < str.size(); i++)
//     {
//         hash[str[i] - 'a']++;
//     }
//     for(int i = 0; i < 26; i++)
//     {
//         res += to_string(hash[i]);
//     }
//     return res;
// }
int main()
{
    int n;
    cin>>n;
    map<pair<string, pair<char, char>>, bool> mymap;
    string str;
    char f, l;
    for(int i = 0; i < n; i++)
    {
        cin>>str;
        f = str[0];
        l = str[str.size()-1];
        sort(str.begin(), str.end());
        // res = findHash(str);
        mymap[make_pair(str, make_pair(f, l))] = true;
    }
    cout<<mymap.size();
    return 0;
}