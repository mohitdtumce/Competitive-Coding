#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size(), col = matrix[0].size();
        int r = 0, c = col - 1;
        while (r < row && c >= 0)
        {
            if (matrix[r][c] == target)
            {
                return true;
            }
            else if (matrix[r][c] < target)
            {
                r++;
            }
            else
            {
                c--;
            }
        }
        return false;
    }
};