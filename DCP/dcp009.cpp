/*
Given a list of integers, write a function that returns the largest sum of non-adjacent numbers. 
Numbers can be 0 or negative.

For example, [2, 4, 6, 2, 5] should return 13, since we pick 2, 6, and 5. 
[5, 1, 1, 5] should return 10, since we pick 5 and 5.

Follow-up: Can you do this in O(N) time and constant space?
*/

#include <bits/stdc++.h>
using namespace std;

int maxNonAdjecentSum(const vector<int> &vec)
{
    int incl = vec[0], excl = 0, temp;
    for (int i = 1; i < vec.size(); i++)
    {
        temp = max(incl, excl);
        incl = excl + vec[i];
        excl = temp;
    }
    return max(excl, incl);
}
int main()
{
    vector<int> vec = {5, 1, 1, 5};
    cout<<maxNonAdjecentSum(vec);
    return 0;
}