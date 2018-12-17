#include <bits/stdc++.h>
using namespace std;

void prettyPrint(int n)
{
    vector<int> vec(2 * n - 1, n);
    vector<vector<int>> res(2 * n - 1);
    res[0] = vec;
    res[2 * n - 2] = vec;
    for (int i = 1; i <= (2 * n - 1) / 2; i++)
    {
        for (int j = i; j < 2 * n - 1 - i; j++)
        {
            vec[j] -= 1;
        }
        res[i] = vec;
        res[2 * n - 2 - i] = vec;
    }

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    prettyPrint(4);
    return 0;
}