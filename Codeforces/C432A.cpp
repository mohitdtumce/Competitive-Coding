#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, temp, counter = 0;
    cin>>n>>k;
    for(int i = 0; i < n; i++) {
        cin>>temp;
        if(temp <= (5 - k)) {
            counter++;
        }
    }
    cout<<counter/3;
    return 0;
}