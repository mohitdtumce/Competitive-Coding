#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string res = "";
    int ctr = n/4;
    while(ctr > 0) {
        res += "abcd";
        ctr--;
    }
    switch(n%4){
        case 1: res += "a"; break;
        case 2: res += "ab"; break;
        case 3: res += "abc"; break;
    }
    cout<<res;
    return 0;
}