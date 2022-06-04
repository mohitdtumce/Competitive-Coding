#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinations;
    void combine(vector<int> &combinationSoFar, vector<bool> &chosen, int idx, int &n, int &k, int prev)
    {
        if (idx >= k)
        {
            combinations.push_back(combinationSoFar);
            return;
        }
        for (int i = prev; i <= n; i++)
        {
            if (!chosen[i])
            {
                combinationSoFar[idx] = i;
                chosen[i] = true;
                combine(combinationSoFar, chosen, idx + 1, n, k, i);
                combinationSoFar[idx] = 0;
                chosen[i] = false;
            }
        }
    }
    vector<vector<int>> combine(int n, int k)
    {
        vector<int> combinationSoFar(k, 0);
        vector<bool> chosen(n + 1, false);
        combine(combinationSoFar, chosen, 0, n, k, 1);
        return combinations;
    }
};