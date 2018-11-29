#include <bits/stdc++.h>
using namespace std;

bool isSafe(int r, int c, int row, int col) {
    return (r >= 0 && r < row && c >= 0 && c < col);
}

int connectedCell(vector<vector<int>> matrix) {
    int row = 0, col = 0;
    row = matrix.size();
    if (row == 0)
        return 0;
    col = matrix[0].size();
    int count = 0;
    int move_r[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int move_c[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
    int next_r, next_c;
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            if (matrix[r][c]) {
                for (int i = 0; i < 8; i++) {
                    next_r = r + move_r[i];
                    next_c = c + move_c[i];
                    if (isSafe(next_r, next_c, row, col) && matrix[next_r][next_c])
                        count++;
                }
            }
        }
    } 
    return (count/2);
}

int main() {
    int row, col;
    cin>>row>>col;
    vector<vector<int>> matrix(row, vector<int>(col,1));
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin>>matrix[i][j];
    cout<<connectedCell(matrix);
    return 0;
}