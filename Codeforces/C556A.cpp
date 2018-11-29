#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(str[i] == '0') {
            count ++;
        } else {
            count --;
        }
    }
    cout<<abs(count);
    return 0;
}