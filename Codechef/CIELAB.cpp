#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    string res = to_string(a-b);
    int sz = res.size();
    if (res[sz - 1] == '9')
        res[sz- 1] = '8';
    else
        res[sz - 1] += 1;
    cout<<res;
    return 0;
}