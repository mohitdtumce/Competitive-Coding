/*
Given an array of integers and a number k, where 1 <= k <= length of the array, 
compute the maximum values of each subarray of length k.

For example, given array = [10, 5, 2, 7, 8, 7] and k = 3, 
we should get: [10, 7, 8, 8], since:

10 = max(10, 5, 2)
7 = max(5, 2, 7)
8 = max(2, 7, 8)
8 = max(7, 8, 7)
Do this in O(n) time and O(k) space. 

You can modify the input array in-place and you do not need to store the results. 
You can simply print them out as you compute them.
*/

#include <bits/stdc++.h>
using namespace std;

void slidingWindowMaximum(const vector<int> &vec, int k)
{
    deque<int> dq;
    int i = 0;
    for (; i < k; i++)
    {
        while (!dq.empty() && vec[dq.back()] < vec[i])
            dq.pop_back();
        dq.push_back(i);
    }

    for (; i < vec.size(); i++)
    {
        cout << vec[dq.front()] << " ";

        while (!dq.empty() && vec[dq.back()] < vec[i])
            dq.pop_back();

        dq.push_back(i);

        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();
    }
    cout << vec[dq.front()] << "\n";
}
int main()
{
    vector<int> vec = {10, 5, 2, 7, 8, 7};
    int k = 3;
    slidingWindowMaximum(vec, k);
    return 0;
}