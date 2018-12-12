#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;
    cin >> n;
    vector<vector<int>> tree(n + 1);
    for (int i = 2; i <= n; i++)
    {
        cin >> p;
        tree[p].push_back(i);
    }

    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        int count = 0, child;
        if (tree[i].size() != 0)
        {
            for (int j = 0; j < tree[i].size(); j++)
            {
                child = tree[i][j];
                if (tree[child].size() == 0)
                    count++;
            }
            if (count < 3) 
            {
                flag = false;
                break;
            }
        } else {
            continue;
        }  
    }
    cout << (flag ? "Yes" : "No");
    return 0;
}