/*
You have an N by N board. Write a function that, 
given N, returns the number of possible arrangements of the board 
where N queens can be placed on the board without threatening each other, 
i.e. no two queens share the same row, column, or diagonal.
*/

#include <bits/stdc++.h>
using namespace std;

void display(const vector<vector<bool>> &grid, int N)
{
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
}

bool isSafe(const vector<vector<bool>> &grid, int row, int col, int N)
{
    int r, c;

    // Check vertical upward;
    r = row;
    c = col;
    while (r >= 0 && c >= 0)
    {
        if (grid[r][c])
            return false;
        r--;
        c--;
    }

    // Check vertical downward;
    r = row;
    c = col;
    while (r < N && c >= 0)
    {
        if (grid[r][c])
            return false;
        r++;
        c--;
    }

    // Check horizontallly backward
    c = col;
    while (c >= 0)
    {
        if (grid[row][c])
            return false;
        c--;
    }

    return true;
}

bool NQueenHelper(vector<vector<bool>> &grid, int N, int col)
{
    if (col >= N)
        return true;
    else
    {
        for (int row = 0; row < N; row++)
        {
            if (isSafe(grid, row, col, N))
            {
                grid[row][col] = true;
                if (NQueenHelper(grid, N, col + 1))
                    return true;
                grid[row][col] = false;
            }
        }
        return false;
    }
}

bool NQueen(int N)
{
    vector<vector<bool>> grid(N, vector<bool>(N, false));
    if (NQueenHelper(grid, N, 0))
    {
        display(grid, N);
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    NQueen(8);
    return 0;
}