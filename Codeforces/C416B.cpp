#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin>>m>>n;
    int t[m][n] = {};
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>t[i][j];
        }
    }

    long ft[m] = {};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(j == 0) {
                ft[j] = ft[j] + t[j][i];
            } else {
                ft[j] = max(ft[j], ft[j-1]) + t[j][i];
            }
        }
    }
    for(int i = 0; i < m; i++) {
        cout<<ft[i]<<" ";
    }
    return 0;
}