#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007

int coinChange(int N, int * S, int m) {
    int coin[N+1][m] = {};
    int x, y;
    for (int j = 0; j < m; j++)
        coin[0][j] = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < m; j++) {
            x = 0; y = 0;           
            if (i >= S[j])
                x = coin[i - S[j]][j];
            
            if (j >= 1)
                y = coin[i][j-1];
            
            coin[i][j] = x+y;
        }
    }
    return coin[N][m-1];
}
int main() {
    int t, m, N;
    cin>>t;
    while (t--) {
        cin>>m;
        int S[m];
        for (int j = 0; j < m; j++)
            cin>>S[j];
        cin>>N;
        cout<<coinChange(N, S, m)<<"\n";
    }
}