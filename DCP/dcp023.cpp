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

int xmoves[4] = {1, -1, 0, 0};
int ymoves[4] = {0, 0, 1, -1};
bool isSafe(const vector<vector<bool>> &grid, int r, int c)
{
    int Row = grid.size();
    int Col = grid[0].size();
    return (r >= 0 && r < Row && c >= 0 && c < Col && !grid[r][c]);
}

int countPathHelper(const vector<vector<bool>> &grid, vector<vector<bool>> &visited, 
                    pair<int, int> curr, pair<int, int> destination)
{
    if (curr == destination)
        return 1;
    else
    {
        int sum = 0, nextx, nexty;
        for (int i = 0; i < 4; i++)
        {
            nextx = curr.first + xmoves[i];
            nexty = curr.second + ymoves[i];
            if (isSafe(grid, nextx, nexty) && !visited[nextx][nexty])
            {
                visited[nextx][nexty] = true;
                sum += countPathHelper(grid, visited, make_pair(nextx, nexty), destination);
                visited[nextx][nexty] = false;
            }
        }
        return sum;
    }
}

int countPath(const vector<vector<bool>> &grid, pair<int, int> source, 
              pair<int, int> destination)
{
    int Row = grid.size();
    int Col = grid[0].size();
    vector<vector<bool>> visited(Row, vector<bool>(Col, false));
    visited[source.first][source.second] = true;
    return countPathHelper(grid, visited, source, destination);
}

int main()
{
    vector<vector<bool>> grid = {{false, false, false, false},
                                 {true, true, false, true},
                                 {false, false, false, false},
                                 {false, false, false, false}};

    cout << countPath(grid, make_pair(3, 0), make_pair(0, 0));
    return 0;
}