/*
Given an array of integers, find the first missing positive integer in linear time 
and constant space. In other words, find the lowest positive integer that does not 
exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.
You can modify the input array in-place.
*/

#include <bits/stdc++.h>
using namespace std;

void display(const vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

void segregate(vector<int> &vec)
{
    int i = 0, j = vec.size() - 1;
    while (i < j)
    {
        while (i < j && vec[i] > 0)
            i++;

        while (i < j && vec[j] <= 0)
            j--;

        if (i < j)
        {
            swap(vec[i], vec[j]);
            i++;
            j--;
        }
    }
}

int findFirstPositive(vector<int> &vec)
{
    segregate(vec);
    // display(vec);
    int pos = 0;
    while (pos < vec.size() && vec[pos] > 0)
        pos++;
    // cout<<pos<<"\n";
    for (int i = 0; i < pos; i++)
    {
        if (abs(vec[i]) <= pos && vec[abs(vec[i]) - 1] > 0)
            vec[abs(vec[i]) - 1] *= (-1);
    }

    // display(vec);
    for (int i = 0; i < pos; i++) {
        if (vec[i] > 0)
            return (i+1);
    }
    return pos+1;
}

int main()
{
    vector<int> vec = {1, 1, 0, -1, -2};
    cout << findFirstPositive(vec);
    return 0;
}