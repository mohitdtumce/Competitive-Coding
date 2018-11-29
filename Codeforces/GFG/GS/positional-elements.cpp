#include <bits/stdc++.h>
using namespace std;

int positionalElement(vector<vector<int> > matrix) {
    int row = matrix.size();
    if (row == 0)
        return 0;
    int col = matrix[0].size();
    vector<int> minRow(row), maxRow(row);
    vector<int> minCol(col), maxCol(col);
    int count = 0;
    
    for (int r = 0; r < row; r++) {
        minRow[r] = matrix[r][0];
        maxRow[r] = matrix[r][0];
    }
    for (int c = 0; c < col; c++) {
        minCol[c] = matrix[0][c];
        maxCol[c] = matrix[0][c];
    }
    for (int r = 1; r < row; r++) {
        for (int c = 1; c < col; c++) {
            minRow[r] = min(minRow[r], matrix[r][c]);
            maxRow[r] = max(maxRow[r], matrix[r][c]);
            minCol[c] = min(minCol[c], matrix[r][c]);
            maxCol[c] = max(maxCol[c], matrix[r][c]);
        }
    }

    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            if (matrix[r][c] == minRow[r] || matrix[r][c] == maxRow[r] ||
                matrix[r][c] == minCol[c] || matrix[r][c] == maxCol[c]) {
                    count++;
                }
        }
    }
    return count;
}
int main() {
    int row, col;
    cin>>row>>col;
    vector<vector<int>> matrix(row, vector<int>(col,1));
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin>>matrix[i][j];
    cout<<positionalElement(matrix);
}