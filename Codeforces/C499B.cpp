#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    string la, lb;
    unordered_map<string, string> lang;
    for (int i = 0; i < m; i++) {
        cin>>la>>lb;
        lang[la] = lb;
    }

    string res = "";
    for(int i = 0; i < n; i++) {
        cin>>la;
        res += (la.size() <= lang[la].size() ? la: lang[la]);
        res += " ";
    }
    cout<<res;
    return 0;
}