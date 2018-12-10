#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<long> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        
        sort(vec.begin(), vec.end());
        bool found = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(vec[i] - vec[i + 1]) > 1)
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}