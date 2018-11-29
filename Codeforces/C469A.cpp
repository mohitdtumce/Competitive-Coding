#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, index, i;
    cin>>n;
    bool level[n] = {};
    cin>>x;
    for (i = 0; i < x; i++) {
        cin>>index;
        level[index-1] = true;
    }
    cin>>y;
    for (i = 0; i < y; i++) {
        cin>>index;
        level[index-1] = true;
    }

    bool res = true;
    for(i = 0; i < n; i++) {
        if(level[i] == false) {
            res = false; 
            break;
        }
    }
    cout<< (res?"I become the guy.":"Oh, my keyboard!");
    return 0;
}