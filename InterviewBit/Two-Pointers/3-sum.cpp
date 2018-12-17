#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &A, int target)
{
    int result = 0;
    sort(A.begin(), A.end());
    int min = INT_MAX;
    for (int i = 0; i < A.size(); i++)
    {
        int j = i + 1;
        int k = A.size() - 1;
        while (j < k)
        {
            int sum = A[i] + A[j] + A[k];
            int diff = abs(sum - target);

            if (diff == 0)
                return sum;

            if (diff < min)
            {
                min = diff;
                result = sum;
            }
            if (sum <= target)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return result;
}

int main()
{
    vector<int> vec = {-1, 2, 1, -4};
    vector<int> vec1 = {5, -2, -1, -10, 10};
    cout << threeSumClosest(vec, 1);
    cout << threeSumClosest(vec1, 5);
    return 0;
}