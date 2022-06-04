#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSafe(vector<vector<char>> &board, char ch, int r, int c)
    {
        int adjR = (r / 3) * 3, adjC = (c / 3) * 3;
        for (int idx = 0; idx < 9; idx++)
        {
            if (board[r][idx] == ch || board[idx][c] == ch || board[adjR + (idx / 3)][adjC + (idx % 3)] == ch)
            {
                return false;
            }
        }
        return true;
    }
    bool findIndex(vector<vector<char>> &board, int &r, int &c)
    {
        for (r = 0; r < 9; r++)
        {
            for (c = 0; c < 9; c++)
            {
                if (board[r][c] == '.')
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool solveSudokuHelper(vector<vector<char>> &board)
    {
        int r, c;
        bool emptyLocation = findIndex(board, r, c);
        if (emptyLocation)
        {
            for (char ch = '1'; ch <= '9'; ch++)
            {
                if (isSafe(board, ch, r, c))
                {
                    board[r][c] = ch;
                    if (solveSudokuHelper(board))
                    {
                        return true;
                    }
                    board[r][c] = '.';
                }
            }
            return false;
        }
        return true;
    }
    void solveSudoku(vector<vector<char>> &board)
    {
        solveSudokuHelper(board);
    }
};