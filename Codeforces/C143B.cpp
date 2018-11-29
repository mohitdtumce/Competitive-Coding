#include <bits/stdc++.h>
using namespace std;

int main() {
    string num, res = "";
    cin>>num;
    auto itr = find(num.begin(), num.end(), '.');
    int d = distance(num.begin(), itr);
    int index = 0, i;
    if (num[0] == '-') { d -= 1; index += 1; }
    for (i = 0; i < d%3; i++) {
        res += num[index];
        index++;
    }
    for (i = 0; i < d/3; i += 1) {
        if(d%3 != 0 || i != 0)
            res += ',';
        res += num[index];
        res += num[index + 1];
        res += num[index + 2];
        index += 3;
    }
    res += '.';
    index += 1;
    for (i = 0; i < 2; i++) {
        if(index < num.size()) {
            res += num[index];
            index += 1;
        } else {
            res += '0';
        }
    }
    if (num[0] == '-') {
        res = "($" + res + ")";
    } else {
        res = "$" + res;
    }
    cout<<res;
    return 0;
}