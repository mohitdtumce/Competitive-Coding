#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

bool overlapping(Interval a, Interval b)
{
    if (a.start > b.end || a.end < b.start)
        return false;
    return true;
}

Interval mergeIntervals(Interval a, Interval b)
{
    return Interval(min(a.start, b.start), max(a.end, b.end));
}

bool comp(Interval a, Interval b)
{
    return a.start < b.start;
}
vector<Interval> merge(vector<Interval> &intervals)
{

    sort(intervals.begin(), intervals.end(), comp);
    stack<Interval> S;
    Interval temp;
    S.push(intervals[0]);
    for (int i = 1; i < intervals.size(); i++)
    {
        temp = S.top();
        S.pop();
        if (overlapping(temp, intervals[i]))
        {
            temp = mergeIntervals(temp, intervals[i]);
            S.push(temp);
        }
        else
        {
            S.push(temp);
            S.push(intervals[i]);
        }
    }

    vector<Interval> res(S.size());
    for (int i = S.size() - 1; i >= 0; i--)
    {
        res[i] = S.top();
        S.pop();
    }
    return res;
}

int main()
{
    return 0;
}