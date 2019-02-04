/*
You are given an array of non-negative integers that represents a two-dimensional elevation map 
where each element is unit-width wall and the integer is the height. 
Suppose it will rain and all spots between two walls get filled up.

Compute how many units of water remain trapped on the map in O(N) time and O(1) space.

For example, given the input [2, 1, 2], we can hold 1 unit of water in the middle.

Given the input [3, 0, 1, 3, 0, 5], we can hold 3 units in the first index, 
2 in the second, and 3 in the fourth index (we cannot hold 5 since it would run off to the left), 
so we can trap 8 units of water.
*/

#include <bits/stdc++.h>
using namespace std;

int trappingWater(const vector<int> &vec)
{
    int len = vec.size();
    vector<int> lmax(len, 0), rmax(len, 0);

    lmax[0] = vec[0]; 
    rmax[len - 1] = vec[len - 1];

    for (int i = 1; i < len; i++)
    {
        lmax[i] = max(lmax[i - 1], vec[i]);
        rmax[len - 1 - i] = max(rmax[len - i], vec[len - 1 - i]);
    }

    int trappedWater = 0;
    for (int i = 0; i < len; i++)
    {
        trappedWater += min(lmax[i], rmax[i]) - vec[i];
    }

    return trappedWater;
}

int main()
{
    vector<int> vec = {3, 0, 1, 3, 0, 5};
    cout << trappingWater(vec);
}