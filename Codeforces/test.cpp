#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b) {
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}
int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<string> str(n);
        for (int i = 0; i < n; i++) {
            cin>>str[i];
        }
        sort(str.begin(), str.end(), comp);
        for (int i = 0; i < str.size(); i++) {
            cout<<str[i];
        } 
        cout<<"\n";
    }    
    return 0;
}