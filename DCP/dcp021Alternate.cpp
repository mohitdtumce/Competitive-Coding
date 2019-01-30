/*
Given an array of time intervals (start, end) for classroom lectures (possibly overlapping), 
find the minimum number of rooms required.

For example, given [(30, 75), (0, 50), (60, 150)], you should return 2.
*/

#include <bits/stdc++.h>
using namespace std;

int minClassrooms(const vector<pair<int, int>> &interval)
{
    int n = interval.size();
    vector<int> startTime(n);
    vector<int> endTime(n);
    for (int i = 0; i < n; i++)
    {
        startTime[i] = interval[i].first;
        endTime[i] = interval[i].second;
        // cout << startTime[i] << " " << endTime[i] << "\n";
    }

    sort(startTime.begin(), startTime.end());
    sort(endTime.begin(), endTime.end());

    int p = 0, q = 0, maxRooms = 0;
    while (p < n && q < n)
    {
        if (startTime[p] < endTime[q])
        {
            p++;
        }
        else if (startTime[p] > endTime[q])
        {
            q++;
        }
        else
        {
            p++;
            q++;
        }
        maxRooms = max(maxRooms, p - q);
    }

    return maxRooms;
}
int main()
{
    vector<pair<int, int>> interval = {make_pair(900, 910), make_pair(940, 1200), make_pair(950, 1120), make_pair(1100, 1130), make_pair(1500, 1900), make_pair(1800, 2000)};
    cout << minClassrooms(interval);
    return 0;
}