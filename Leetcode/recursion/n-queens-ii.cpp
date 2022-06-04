#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int counter;
    bool isSafe(vector<string> &board, int row, int col, const int n)
    {
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        {
            if (board[i][j] == 'Q')
            {
                return false;
            }
        }

        for (int i = row, j = col; i < n && j >= 0; i++, j--)
        {
            if (board[i][j] == 'Q')
            {
                return false;
            }
        }

        for (int j = col; j >= 0; j--)
        {
            if (board[row][j] == 'Q')
            {
                return false;
            }
        }

        return true;
    }

    bool solveNQueens(vector<string> &board, int col, const int n)
    {
        if (col >= n)
        {
            counter++;
            return true;
        }
        for (int r = 0; r < n; r++)
        {
            if (isSafe(board, r, col, n))
            {
                board[r][col] = 'Q';
                solveNQueens(board, col + 1, n);
                board[r][col] = '.';
            }
        }
        return false;
    }


    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        counter = 0;
        solveNQueens(board, 0, n);
        return counter;
    }
};