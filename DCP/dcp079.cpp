/*
Given an array of integers, write a function to determine whether the array 
could become non-decreasing by modifying at most 1 element.

For example, given the array [10, 5, 7], you should return true, 
since we can modify the 10 into a 1 to make the array non-decreasing.

Given the array [10, 5, 1], you should return false, 
since we can't modify any one element to get a non-decreasing array.
*/

#include <bits/stdc++.h>
using namespace std;

bool CanBeNonDecreasing(const vector<int> &vec)
{
    int count = 0;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] > vec[i + 1])
        {
            count++;
        }
    }

    return (count <= 1);
}

int main()
{
    vector<int> vec = {10, 5, 1};
    cout<<CanBeNonDecreasing(vec);
}