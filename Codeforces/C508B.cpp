// Problem: Anton and Currency you all know
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    string str;
    cin>>str;
    int sz = str.size();
    int lastChar = int(str[sz - 1] - '0');
    string res = str;
    int currChar;
    for (int i = 0; i < sz - 1; i++) {
        currChar = int(str[i] - '0');
        if (currChar%2 == 0 && currChar > lastChar) {
            res = str;
            swap(res[i], res[sz-1]);
        }
    }

    for (int i = sz - 2; i >= 0; i--) {
        currChar = int(str[i] - '0');
        if (currChar%2 == 0 && currChar < lastChar) {
            res = str;
            swap(res[i], res[sz-1]);
        }
    }
    
    if(res == str) {
        cout<<"-1";
    } else {
        cout<<res;
    }
    return 0;
}