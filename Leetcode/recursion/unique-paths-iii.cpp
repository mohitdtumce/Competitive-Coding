#include <bits/stdc++.h>
using namespace std;

const int PossibleMoves = 4;
const int xMoves[] = {0, 1, 0, -1};
const int yMoves[] = {1, 0, -1, 0};
class Solution
{
    int counter, row, col, destRow, destCol, obstacles;

public:
    bool isSafe(const vector<vector<int>> &grid, vector<vector<bool>> &visited, int r, int c)
    {
        return (r >= 0 && r < row && c >= 0 && c < col && !visited[r][c] && (grid[r][c] == 0 || grid[r][c] == 2));
    }

    void uniquePathsIII(const vector<vector<int>> &grid, vector<vector<bool>> &visited, int x, int y, int count)
    {
        if (x == destRow && y == destCol)
        {
            counter = counter + ((row * col - obstacles) == count ? 1 : 0);
            return;
        }

        for (int i = 0; i < PossibleMoves; i++)
        {
            int nextX = x + xMoves[i];
            int nextY = y + yMoves[i];
            if (isSafe(grid, visited, nextX, nextY))
            {
                visited[nextX][nextY] = true;
                uniquePathsIII(grid, visited, nextX, nextY, count + 1);
                visited[nextX][nextY] = false;
            }
        }
    }
    int uniquePathsIII(vector<vector<int>> &grid)
    {
        counter = 0;
        row = grid.size();
        col = grid[0].size();
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        int startRow, startCol;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == 1)
                {
                    startRow = i;
                    startCol = j;
                }

                if (grid[i][j] == 2)
                {
                    destRow = i;
                    destCol = j;
                }

                if (grid[i][j] == -1)
                    obstacles++;
            }
        }
        uniquePathsIII(grid, visited, startRow, startCol, 1);
        return counter;
    }
};