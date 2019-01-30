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

    int p = 0, q = 0, maxRooms = 0, rooms = 0;
    while (p < n && q < n)
    {
        if (startTime[p] < endTime[q])
        {
            rooms++;
            p++;
            maxRooms = max(rooms, maxRooms);
        }
        else if (startTime[p] > endTime[q])
        {
            rooms--;
            q++;
        }
        else
        {
            p++;
            q++;
        }
    }

    return maxRooms;
}
int main()
{
    vector<pair<int, int>> interval = {make_pair(30, 75), make_pair(0, 50), make_pair(60, 150)};
    cout << minClassrooms(interval);
    return 0;
}