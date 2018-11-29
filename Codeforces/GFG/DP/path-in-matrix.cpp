#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007

long long maxSumPath(int ** mat, int N) {
    long long tc[N][N] = {};
    for (int i = 0; i < N; i++) {
        tc[0][i] = mat[0][i];
    }
    long long left, right;
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j > 0)
                left = tc[i-1][j-1];
            else
                left = 0;
            
            if (j + 1 < N)
                right = tc[i-1][j+1];
            else
                right = 0;
            tc[i][j] = max(tc[i-1][j], max(left, right)) + mat[i][j];
        }
    }
    long long maxRes = 0;
    for (int i = 0; i < N; i++) {
        maxRes = max(maxRes, tc[N-1][i]);
    }
    return maxRes;
}
int main() {
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int ** mat = new int * [n];
        for (int i = 0; i < n; i++) {
            mat[i] = new int [n];
            for (int j = 0; j < n; j++)
                cin>>mat[i][j];
        } 
        cout<<maxSumPath(mat, n);
    }
}