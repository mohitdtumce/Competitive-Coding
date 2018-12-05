#include <bits/stdc++.h>
using namespace std;

int seatPreference(char ch)
{
    switch (ch)
    {
    case 'f':
        return -5;
    case 'e':
        return -4;
    case 'd':
        return -3;
    case 'a':
        return -2;
    case 'b':
        return -1;
    case 'c':
        return 0;
    }
}
int main()
{
    string seat;
    cin >> seat;
    char s;
    unsigned long long n;
    s = seat[seat.size() - 1];
    seat.pop_back();
    n = stoull(seat);
    unsigned long long timeReq = 0;
    switch (n % 4)
    {
    case 1:
        timeReq = (n - 1) + (2 * (n / 4) + 1) * 6 + seatPreference(s);
        break;
    case 2:
        timeReq = (n - 1) + (2 * (n / 4) + 2) * 6 + seatPreference(s);
        break;
    case 3:
        timeReq = (n - 3) + (2 * (n / 4) + 1) * 6 + seatPreference(s);
        break;
    case 0:
        timeReq = (n - 3) + (2 * (n / 4)) * 6 + seatPreference(s);
        break;
    default:
        break;
    }
    cout << timeReq;
    return 0;
}