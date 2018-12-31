#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<string> vec(n);
    int i, j, count;
    for (i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    long res = 0;
    if (k == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vec[i][j] == '.')
                    res++;
            }
        }
        cout << res;
    }
    else
    {
        if (m > 1)
        {
            for (i = 0; i < n; i++)
            {
                j = 0, count = 0;
                while (1)
                {
                    while (j < m && vec[i][j] == '.')
                    {
                        j++;
                        count++;
                    }

                    if (count >= k)
                    {
                        res += (count - k + 1);
                    }
                    count = 0;
                    j++;
                    if (j >= m)
                    {
                        break;
                    }
                }
            }
        }

        if (n > 1)
        {
            for (j = 0; j < m; j++)
            {
                i = 0, count = 0;
                while (1)
                {
                    while (i < n && vec[i][j] == '.')
                    {
                        i++;
                        count++;
                    }

                    if (count >= k)
                    {
                        res += (count - k + 1);
                    }
                    count = 0;
                    i++;
                    if (i >= n)
                    {
                        break;
                    }
                }
            }
        }
        cout << res;
    }

    return 0;
}