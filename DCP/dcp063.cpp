/*
Given a 2D matrix of characters and a target word, 
write a function that returns whether the word can be 
found in the matrix by going left-to-right, or up-to-down.

For example, given the following matrix:

[['F', 'A', 'C', 'I'],
 ['O', 'B', 'Q', 'P'],
 ['A', 'N', 'O', 'B'],
 ['M', 'A', 'S', 'S']]
and the target word 'FOAM', you should return true, 
since it's the leftmost column. Similarly, given the target word 'MASS', 
you should return true, since it's the last row.
*/

#include <bits/stdc++.h>
using namespace std;

#define VALID_MOVES_COUNT 8
vector<int> xMoves = {-1, -1, -1, 0, 1, 1, 1, 0};
vector<int> yMoves = {-1, 0, 1, 1, 1, 0, -1, -1};

bool IsSafe(const vector<vector<char>> &grid, vector<vector<bool>> &visited,
            int r, int c, int Row, int Col, char ch)
{
    return (r >= 0 && r < Row && c >= 0 && c < Col && grid[r][c] == ch && !visited[r][c]);
}

bool IsWordPresentHelper(const vector<vector<char>> &grid, vector<vector<bool>> &visited,
                         int r, int c, int Row, int Col, const string &str, int start, int end)
{
    if (start > end)
    {
        return true;
    }
    else
    {
        if (IsSafe(grid, visited, r, c, Row, Col, str[start]))
        {
            visited[r][c] = true;
            for (int i = 0; i < VALID_MOVES_COUNT; i++)
            {
                if (IsWordPresentHelper(grid, visited, r + xMoves[i],
                                        c + yMoves[i], Row, Col, str, start + 1, end))
                    return true;
            }
            visited[r][c] = false;
        }
        return false;
    }
}

bool IsWordPresent(const vector<vector<char>> &grid, string str)
{
    int Row = grid.size();
    int Col = grid[0].size();

    vector<vector<bool>> visited(Row, vector<bool>(Col, false));

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (IsWordPresentHelper(grid, visited, i, j, Row, Col, str, 0, str.size() - 1))
                return true;
        }
    }
    return false;
}
int main()
{
    vector<vector<char>> grid = {{'F', 'A', 'C', 'I'},
                                 {'O', 'B', 'Q', 'P'},
                                 {'A', 'N', 'O', 'B'},
                                 {'M', 'A', 'S', 'S'}};
    cout<<IsWordPresent(grid, "");
    return 0;
}