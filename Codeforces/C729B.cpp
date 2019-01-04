// Incorrect Implementation
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> stage(n, vector<bool>(m));
    bool pos;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> pos;
            stage[i][j] = pos;
        }
    }

    long count = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> col_l2r(m, 0);
        vector<int> col_r2l(m, 0);
        for (int j = 0; j < m; j++)
        {
            if (j == 0)
            {
                col_l2r[j] = stage[i][j];
                col_r2l[m - 1 - j] = stage[i][m - 1 - j];
            }
            else
            {
                col_l2r[j] = col_l2r[j - 1] + stage[i][j];
                col_r2l[m - 1 - j] = col_r2l[m - j] + stage[i][m - 1 - j];
            }
        }

        for (int j = 0; j < m; j++)
        {
            if (stage[i][j] == 0)
            {
                if (j == 0)
                {
                    if (j + 1 < m && col_r2l[j + 1] > 0)
                        count++;
                }
                else if (j == m - 1)
                {
                    if (j - 1 >= 0 && col_l2r[j - 1] > 0)
                        count++;
                }
                else
                {
                    if (j + 1 < m && col_r2l[j + 1] > 0)
                        count++;
                    if (j - 1 >= 0 && col_l2r[j - 1] > 0)
                        count++;
                }
            }
        }
    }

    for (int j = 0; j < m; j++)
    {
        vector<int> row_u2d(n, 0);
        vector<int> row_d2u(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                row_u2d[i] = stage[i][j];
                row_d2u[n - 1 - i] = stage[n - 1 - i][j];
            }
            else
            {
                row_u2d[i] = row_u2d[i - 1] + stage[i][j];
                row_d2u[n - 1 - i] = row_d2u[n - i] + stage[n - 1 - i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (stage[i][j] == 0)
            {
                if (i == 0)
                {
                    if (i + 1 < n && row_d2u[i + 1] > 0)
                        count++;
                }
                else if (i == n - 1)
                {
                    if (i - 1 >= 0 && row_u2d[i - 1] > 0)
                        count++;
                }
                else
                {
                    if (i + 1 < m && row_d2u[i + 1] > 0)
                        count++;
                    if (i - 1 >= 0 && row_u2d[i - 1] > 0)
                        count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}