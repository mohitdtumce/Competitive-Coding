#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;
    cin >> n;
    vector<vector<int>> emp(n + 1);
    queue<int> Q;
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        if (p == -1)
        {
            Q.push(i);
        }
        else
        {
            emp[p].push_back(i);
        }
    }
    Q.push(-1);
    int temp, count = 0;
    while (!Q.empty())
    {
        temp = Q.front();
        Q.pop();
        if (temp == -1)
        {
            count++;
            if (Q.empty())
                break;
            Q.push(-1);
        }
        else
        {
            for (int j = 0; j < emp[temp].size(); j++)
            {
                Q.push(emp[temp][j]);
            }
        }
    }
    cout << count;
    return 0;
}