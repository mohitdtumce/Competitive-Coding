#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_set<char> rows[9], cols[9], block[9];
        for (int r = 0; r < 9; r++)
        {
            for (int c = 0; c < 9; c++)
            {
                if (board[r][c] == '.')
                    continue;
                if (rows[r].find(board[r][c]) == rows[r].end())
                {
                    rows[r].insert(board[r][c]);
                }
                else
                {
                    return false;
                }

                if (cols[c].find(board[r][c]) == cols[c].end())
                {
                    cols[c].insert(board[r][c]);
                }
                else
                {
                    return false;
                }

                int idx = (r / 3) * 3 + (c / 3);
                if (block[idx].find(board[r][c]) == block[idx].end()) {
                    block[idx].insert(board[r][c]);
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};