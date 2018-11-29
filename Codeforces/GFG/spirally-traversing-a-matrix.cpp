#include <bits/stdc++.h>
using namespace std;

void spiralTraversal(int ** grid, int row, int col) {
    int r = 0, c = 0;
    while (r <= row && c <= col) {
        for (int i = c; i <= col; i++) {
            cout<<grid[r][i]<<" ";
        }
        r++;

        for (int j = r; j <= row; j++) {
            cout<<grid[j][col]<<" ";
        }
        col--;

        if (r <= row) {
            for (int j = col; j >= c; j--) {
                cout<<grid[row][j]<<" ";
            }
            row--;
        }

        if (c <= col) {
            for (int i = row; i >= r; i--) {
                cout<<grid[i][c]<<" ";
            }
            c++;
        }
    }
}

int main() {
    int t, M, N;
    cin>>t;
    while(t != 0) {
        cin>>M>>N;
        int ** grid = new int * [M];
        for (int i = 0; i < M; i++) {
            grid[i] = new int [N];
            for(int j = 0; j < N; j++) {
                cin>>grid[i][j];
            }
        }
        spiralTraversal(grid, M-1, N-1);
        cout<<"\n";
        t -= 1;
    }
	return 0;
}