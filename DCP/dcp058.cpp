/*
An sorted array of integers was rotated an unknown number of times.

Given such an array, find the index of the element in the array in faster than linear time. 
If the element doesn't exist in the array, return null.

For example, given the array [13, 18, 25, 2, 8, 10] and the element 8, 
return 4 (the index of 8 in the array).

You can assume all the integers in the array are unique.
*/

#include <bits/stdc++.h>
using namespace std;

int helper(const vector<int> &arr, int start, int end)
{
    if (start > end)
        return -1;
    if (start == end)
        return start;
    int mid = start + (end - start) / 2;

    if (mid > start && arr[mid] < arr[mid - 1])
        return mid;
    if (mid < end && arr[mid] > arr[mid + 1])
        return mid + 1;

    if (arr[start] < arr[mid])
        return helper(arr, mid + 1, end);
    return helper(arr, start, mid - 1);
}

int binarySearch(const vector<int> &arr, int start, int end, int x)
{
    if (start > end)
        return -1;

    int mid = start + (end - start) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] < x)
        return binarySearch(arr, mid + 1, end, x);
    else
        return binarySearch(arr, start, mid - 1, x);
}

int findElement(const vector<int> &vec, int sum)
{
    int pivot = helper(vec, 0, vec.size() - 1);
    if (pivot == -1)
        return binarySearch(vec, 0, vec.size() - 1, sum);
    else if (vec[0] > sum)
        return binarySearch(vec, pivot, vec.size() - 1, sum);
    else
        return binarySearch(vec, 0, pivot - 1, sum);
}

// ====================Method 2==============================
int helperAlternate(const vector<int> &arr, int start, int end, int sum)
{
    if (start > end)
        return -1;
    int mid = start + (end - start) / 2;
    if (arr[mid] == sum)
        return mid;

    if (arr[start] <= arr[mid])
    {
        if (sum >= arr[start] && sum < arr[mid])
            return helperAlternate(arr, start, mid - 1, sum);
        else
            return helperAlternate(arr, mid + 1, end, sum);
    }
    else
    {
        if (sum > arr[mid] && sum <= arr[end])
            return helperAlternate(arr, mid + 1, end, sum);
        else
            return helperAlternate(arr, start, mid - 1, sum);
    }
}
int findElementAlternate(const vector<int> &vec, int sum)
{
    return helperAlternate(vec, 0, vec.size()-1, sum);
}

int main()
{
    vector<int> vec = {13, 18, 25, 2, 8, 10};
    int element = 10;
    cout << findElementAlternate(vec, element);
    return 0;
}