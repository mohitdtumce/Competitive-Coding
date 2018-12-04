#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    bool found = false;
    string res = "";
    int i = 0;
    while (i < str.size() && str[i] == '0') {
        i++;
    }

    while (i < str.size()) {
        if (str[i] == '0')
            break;
        res += str[i];
        i++;
    }

    if (i == str.size()) {
        res.pop_back();
    } else {
        i++;
        for (; i < str.size(); i++) {
            res += str[i];
        }
    }
    cout<<res;
    return 0;
}