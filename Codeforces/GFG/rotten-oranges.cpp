#include <bits/stdc++.h>
using namespace std;
bool nextLevel(pair<int, int> temp) {
    return (temp.first == -2 && temp.second == -2);
}

bool isSafe(int ** grid, int i, int j, int m, int n) {
    return (i >= 0 && i < m && j >= 0 && j < n && grid[i][j] == 1);
}
int rottenOranges(int ** grid, int m, int n) {
    queue<pair<int, int> > Q;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 2)
                Q.push(make_pair(i, j));
        }
    }
    Q.push(make_pair(-2, -2));
    int days = 0;
    pair<int, int> temp;
    while (! Q.empty()) {
        temp = Q.front();
        Q.pop();
        if (nextLevel(temp)) {
            if (! Q.empty()) {
                days++;
                Q.push(make_pair(-2, -2));
            }
        } else {
            if (isSafe(grid, temp.first - 1, temp.second, m, n)) {
                grid[temp.first - 1][temp.second] = 2;
                Q.push(make_pair(temp.first - 1, temp.second));
            }

            if (isSafe(grid, temp.first + 1, temp.second, m, n)) {
                grid[temp.first + 1][temp.second] = 2;
                Q.push(make_pair(temp.first + 1, temp.second));
            }

            if (isSafe(grid, temp.first, temp.second - 1, m, n)) {
                grid[temp.first][temp.second - 1] = 2;
                Q.push(make_pair(temp.first, temp.second - 1));
            }

            if (isSafe(grid, temp.first, temp.second + 1, m, n)) {
                grid[temp.first][temp.second + 1] = 2;
                Q.push(make_pair(temp.first, temp.second + 1));
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1)
                days = -1;
        }
    }
    return days;
}

int main() {
    int t, m, n;
    cin>>t;
    while (t--) {
        cin>>m>>n;
        int ** grid = new int * [m];
        for (int i = 0; i < m; i++) {
            grid[i] = new int[n];
            for(int j = 0; j < n; j++)
                cin>>grid[i][j];
        }
        cout<<rottenOranges(grid, m, n)<<"\n";
    }
}