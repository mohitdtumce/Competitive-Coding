#include <bits/stdc++.h>
using namespace std;

int isValidSudoku(const vector<string> &mat)
{
    vector<int> vec(9, 0);
    vector<vector<int>> hashR(9, vec);
    vector<vector<int>> hashC(9, vec);
    vector<vector<int>> hashB(9, vec);
    int r = 0, c = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (mat[i][j] >= '1' && mat[i][j] <= '9')
            {
                hashR[i][mat[i][j] - '1']++;
                if (hashR[i][mat[i][j] - '1'] > 1)
                {
                    return false;
                }
            }

            if (mat[j][i] >= '1' && mat[j][i] <= '9')
            {
                hashC[i][mat[j][i] - '1']++;
                if (hashC[i][mat[j][i] - '1'] > 1)
                {
                    return false;
                }
            }

            if (mat[i][j] >= '1' && mat[i][j] <= '9')
            {
                r = ceil(i / 3);
                c = ceil(j / 3);
                hashB[(r * 3 + c) % 9][mat[i][j] - '1']++;
                if (hashB[(r * 3 + c) % 9][mat[i][j] - '1'] > 1)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    const vector<string> mat = { "..5.....6", "....14...", ".........", ".....92..", "5....2...", ".......3.", "...54....", "3.....42.", "...27.6.."};
    cout << isValidSudoku(mat);
    return 0;
}
