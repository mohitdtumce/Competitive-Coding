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

Interval merge(Interval a, Interval b)
{
    return Interval(min(a.start, b.start), max(a.end, b.end));
}

vector<Interval> insert(vector<Interval> &intervals, Interval newInterval)
{
    stack<Interval> S;
    Interval temp;
    int i = 0;
    S.push(newInterval);
    for (; i < intervals.size(); i++)
    {
        newInterval = S.top();
        S.pop();
        if (overlapping(intervals[i], newInterval))
        {
            newInterval = merge(intervals[i], newInterval);
            S.push(newInterval);
        }
        else
        {
            if (intervals[i].start < newInterval.start)
            {
                S.push(intervals[i]);
                S.push(newInterval);
            }
            else
            {
                S.push(newInterval);
                S.push(intervals[i]);
            }
        }
    }

    vector<Interval> vec(S.size());
    for (int i = S.size() - 1; i >= 0; i--)
    {
        vec[i] = S.top();
        S.pop();
    }
    return vec;
}

int main() {
    return 0;
}