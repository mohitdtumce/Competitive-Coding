#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string str;
    cin>>t;
    cin>>ws;
    while(t != 0) {
        getline(cin, str);
        cin>>ws;
        int count = 0, len = str.size();
        bool hash[256] = {};
        for (int i = 0; i < len; i++) {
            if (hash[str[i]]) 
                count++;
            else {
                hash[str[i]] = true;
                str[i - count] = str[i];
            }
        }   
        for (int i = 0; i < len - count; i ++) {
            cout<<str[i];
        }
        cout<<"\n";
        t -= 1;
    }
}