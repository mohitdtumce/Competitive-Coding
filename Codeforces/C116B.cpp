#include <bits/stdc++.h>
using namespace std;

bool isWolfAround(vector<string> &grid, int r, int c, int row, int col)
{
    if (r > 0 && grid[r - 1][c] == 'W')
    {
        grid[r - 1][c] = '.';
        return true;
    }
    if (r < row && grid[r + 1][c] == 'W')
    {
        grid[r + 1][c] = '.';
        return true;
    }
    if (c > 0 && grid[r][c - 1] == 'W')
    {
        grid[r][c - 1] = '.';
        return true;
    }
    if (c < col && grid[r][c + 1] == 'W')
    {
        grid[r][c + 1] = '.';
        return true;
    }
    return false;
}
int main()
{
    int r, c;
    cin >> r >> c;
    vector<string> grid(r);
    for (int i = 0; i < r; i++)
    {
        cin >> grid[i];
    }
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] == 'P' && isWolfAround(grid, i, j, r - 1, c - 1))
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}