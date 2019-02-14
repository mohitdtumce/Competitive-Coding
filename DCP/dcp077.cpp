/*
Given a list of possibly overlapping intervals, 
return a new list of intervals where all overlapping intervals have been merged.

The input list is not necessarily ordered in any way.

For example, given [(1, 3), (5, 8), (4, 10), (20, 25)], you should return [(1, 3), (4, 10), (20, 25)].
*/

#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first)
        return true;
    else if (a.first > b.first)
        return false;
    else
        return (a.second < b.second);
}

bool AreOverlappingIntervals(pair<int, int> a, pair<int, int> b)
{
    return (!(max(a.first, a.second) < min(b.first, b.second)) && !(min(a.first, a.second) > max(b.first, b.second)));
}

pair<int, int> MergeOverlappingIntervals(pair<int, int> a, pair<int, int> b)
{
    return make_pair(min(a.first, b.first), max(a.second, b.second));
}

vector<pair<int, int>> MergeIntervals(vector<pair<int, int>> &intervals)
{
    sort(intervals.begin(), intervals.end(), comp);
    stack<pair<int, int>> S;
    S.push(intervals[0]);
    pair<int, int> temp;
    for (int i = 1; i < intervals.size(); i++)
    {
        if (AreOverlappingIntervals(S.top(), intervals[i]))
        {
            temp = MergeOverlappingIntervals(S.top(), intervals[i]);
            S.pop();
            S.push(temp);
        }
        else
        {
            S.push(intervals[i]);
        }
    }

    int size = S.size();
    vector<pair<int, int>> res(size);
    for (int i = size - 1; i >= 0; i--)
    {
        res[i] = S.top();
        S.pop();
    }

    return res;
}

int main()
{
    vector<pair<int, int>> intervals = {make_pair(1, 3), make_pair(5, 8), make_pair(4, 10), make_pair(20, 25)};
    vector<pair<int, int>> mergedIntervals = MergeIntervals(intervals);
    cout<<"[";
    for (int i = 0; i < mergedIntervals.size(); i++)
    {
        cout<<"("<<mergedIntervals[i].first<<", "<<mergedIntervals[i].second<<"), ";
    }
    cout<<"]\n";
    return 0;
}