#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007

int largestSquare(int ** mat, int row, int col, int atleastOneOne) {
    int dp[row][col] = {};
    for (int i = 0; i < row; i++)
        dp[i][0] = mat[i][0];
    
    for (int j = 0; j < col; j++)
        dp[0][j] = mat[0][j];
    int maxVal = atleastOneOne;
    for (int i = 1; i < row; i++) {
        for (int j = 1; j < col; j++) {
            if (mat[i][j] == 1)
                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
            else 
                dp[i][j] = mat[i][j];
            maxVal = max(maxVal, dp[i][j]);
        }
    }
    return maxVal;
}
int main() {
    int t, row, col;
    cin>>t;
    while (t--) {
        cin>>row>>col;
        int atleastOneOne = 0;
        int ** mat = new int * [row];
        for (int i = 0; i < row; i++) {
            mat[i] = new int[col];
            for (int j = 0; j < col; j++) {
                cin>>mat[i][j];
                if (mat[i][j])
                    atleastOneOne = 1;
            }
        }

        cout<<largestSquare(mat, row, col, atleastOneOne)<<"\n";
    }
}