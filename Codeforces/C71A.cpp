#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        string testcase;
        cin >> testcase;
        int length = testcase.length();
        if (length > 10)
        {
            cout << testcase[0] << (length - 2) % 100 << testcase[length - 1] << endl;
        }
        else
        {
            cout << testcase << endl;
        }
    }
    return 0;
}