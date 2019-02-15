/*
You are given an M by N matrix consisting of booleans that represents a board. 
Each True boolean represents a wall. Each False boolean represents a tile you can walk on.

Given this matrix, a start coordinate, and an end coordinate, 
return the minimum number of steps required to reach the end coordinate from the start. 
If there is no possible path, then return null. You can move up, left, down, and right. 

You cannot move through walls. You cannot wrap around the edges of the board.

For example, given the following board:

{{f, f, f, f},
{t, t, f, t},
{f, f, f, f},
{f, f, f, f}}
and start = (3, 0) (bottom left) and end = (0, 0) (top left), 
the minimum number of steps required to reach the end is 7, 
since we would need to go through (1, 2) 
because there is a wall everywhere else on the second row.
*/

#include <bits/stdc++.h>
using namespace std;

#define VALID_MOVES_COUNT 4

vector<int> xMoves = {-1, 0, 1, 0};
vector<int> yMoves = {0, 1, 0, -1};

bool IsSafe(const vector<vector<bool>> &grid, vector<vector<bool>> &visited,
            int x, int y, const int Row, const int Col)
{
    return (x >= 0 && x < Row && y >= 0 && y < Col && !visited[x][y] && !grid[x][y]);
}
bool countStepsHelper(const vector<vector<bool>> &grid, vector<vector<bool>> &visited,
                      int sx, int sy, const int dx, const int dy, const int Row,
                      const int Col, int steps, int &minSteps)
{
    if (sx == dx && sy == dy)
    {
        minSteps = min(minSteps, steps);
        return true;
    }
    else
    {
        if (IsSafe(grid, visited, sx, sy, Row, Col))
        {
            bool ans = false;
            visited[sx][sy] = true;
            for (int i = 0; i < VALID_MOVES_COUNT; i++)
            {
                ans = ans || countStepsHelper(grid, visited, sx + xMoves[i], sy + yMoves[i],
                                              dx, dy, Row, Col, steps + 1, minSteps);
            }
            if (ans)
                return true;
            visited[sx][sy] = false;
        }
        return false;
    }
}

int countSteps(const vector<vector<bool>> &grid, int sx, int sy, int dx, int dy)
{
    int Row = grid.size();
    int Col = grid[0].size();
    vector<vector<bool>> visited(Row, vector<bool>(Col, false));
    int minSteps = INT_MAX;

    if (countStepsHelper(grid, visited, sx, sy, dx, dy, Row, Col, 0, minSteps))
    {
        return minSteps;
    }
    else
    {
        return INT_MAX;
    }
}

int main()
{
    vector<vector<bool>> grid = {{false, false, false, false},
                                 {true, true, false, true},
                                 {false, false, false, false},
                                 {false, false, false, false}};

    cout << countSteps(grid, 3, 0, 0, 0);
    return 0;
}