#include <bits/stdc++.h>
using namespace std;

int main() {
    long j, s, m;
    cin>>j>>s>>m;
    m -= j;
    if ((m/s) & 1) {
        cout<<"Unlucky Chef";
    } else {
        cout<<"Lucky Chef";
    }
    return 0;
}