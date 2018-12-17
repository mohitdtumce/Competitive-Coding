#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &A)
{
    vector<vector<int>> res;
    vector<int> indices(3);
    int target = 0;
    sort(A.begin(), A.end());
    int min = INT_MAX;
    for (int i = 0; i < A.size(); i++)
    {
        int j = i + 1;
        int k = A.size() - 1;
        while (j < k)
        {
            int sum = A[i] + A[j] + A[k];
            int diff = sum - target;

            if (diff == 0)
            {
                indices[0] = A[i];
                indices[1] = A[j];
                indices[2] = A[k];
                sort(indices.begin(), indices.end());
                if (find(res.begin(), res.end(), indices) == res.end())
                    res.push_back(indices);
                j++;
                k--;
            }
            else if (diff < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }

    // for (int i = 0; i < res.size(); i++)
    // {
    //     cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << "\n";
    // }
    return res;
}

int main()
{
    vector<int> vec = {-1, 0, 1, 2, -1};
    threeSum(vec);
    return 0;
}