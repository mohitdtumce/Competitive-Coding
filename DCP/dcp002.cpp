/*
Given an array of integers, return a new array such that each element at index i of the new array 
is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], 
the expected output would be [120, 60, 40, 30, 24]. 

If our input was [3, 2, 1], the expected output would be [2, 3, 6].
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> prodExceptI(const vector<int> &vec)
{
    int len = vec.size();
    vector<int> res(len);
    long prod = 1;
    for (int i = 0; i < len; i++)
    {
        prod *= vec[i];
    }

    for (int i = 0; i < len; i++)
    {
        res[i] = prod / vec[i];
    }

    return res;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    long prod = 1;
    for (int i = 0; i < vec.size(); i++)
    {
        prod *= vec[i];
    }

    vector<int> res = prodExceptI(vec);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}