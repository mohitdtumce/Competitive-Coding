/*
Sudoku is a puzzle where you're given a partially-filled 9 by 9 grid with digits. 
The objective is to fill the grid with the constraint that every row, column, 
and box (3 by 3 subgrid) must contain all of the digits from 1 to 9.

Implement an efficient sudoku solver.
*/

#include <bits/stdc++.h>
using namespace std;

#define Size 9
#define EMPTY 0

void printSudoku(const vector<vector<int>> &sudoku)
{
    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            cout << sudoku[i][j] << " ";
        }
        cout << "\n";
    }
}

bool isSafe(const vector<vector<int>> &sudoku, int r, int c, int num)
{
    // Check row;
    for (int j = 0; j < Size; j++)
        if (sudoku[r][j] == num)
            return false;

    // Check column;
    for (int i = 0; i < Size; i++)
        if (sudoku[i][c] == num)
            return false;

    // Check Box
    for (int i = (r / 3) * 3; i < (r / 3) * 3 + 3; i++)
    {
        for (int j = (c / 3) * 3; j < (c / 3) * 3 + 3; j++)
        {
            if (sudoku[i][j] == num)
                return false;
        }
    }
    return true;
}

bool sudokuSolverHelper(vector<vector<int>> &sudoku, queue<pair<int, int>> &Q)
{
    int row, col;
    while (!Q.empty())
    {
        row = Q.front().first;
        col = Q.front().second;
        Q.pop();
        for (int num = 1; num <= Size; num++)
        {
            if (isSafe(sudoku, row, col, num))
            {
                sudoku[row][col] = num;
                if (sudokuSolverHelper(sudoku, Q))
                {
                    return true;
                }
                sudoku[row][col] = EMPTY;
            }
        }
        Q.push(make_pair(row, col));
        return false;
    }
    return true;
}

bool sudokuSolver(vector<vector<int>> &sudoku)
{
    // Finding Empty Location
    queue<pair<int, int>> Q;
    for (int r = 0; r < Size; r++)
    {
        for (int c = 0; c < Size; c++)
        {
            if (sudoku[r][c] == EMPTY)
            {
                Q.push(make_pair(r, c));
            }
        }
    }

    if (sudokuSolverHelper(sudoku, Q))
    {
        printSudoku(sudoku);
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    vector<vector<int>> sudoku = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                                  {5, 2, 0, 0, 0, 0, 0, 0, 0},
                                  {0, 8, 7, 0, 0, 0, 0, 3, 1},
                                  {0, 0, 3, 0, 1, 0, 0, 8, 0},
                                  {9, 0, 0, 8, 6, 3, 0, 0, 5},
                                  {0, 5, 0, 0, 9, 0, 6, 0, 0},
                                  {1, 3, 0, 0, 0, 0, 2, 5, 0},
                                  {0, 0, 0, 0, 0, 0, 0, 7, 4},
                                  {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    cout << sudokuSolver(sudoku);
    return 0;
}