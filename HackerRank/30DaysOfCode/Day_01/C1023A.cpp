#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    size_t found = a.find('*');
    if (found == string::npos)
    {
        if (a == b)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        if (n > m + 1)
        {
            cout << "NO";
        }
        else
        {
            for (int i = 0; i < found; i++)
            {
                if (a[i] != b[i])
                {
                    cout << "NO";
                    return 0;
                }
            }

            for (int j = 0; j < n - found - 1; j++)
            {
                if (a[n - 1 - j] != b[m - 1 - j])
                {
                    cout << "NO";
                    return 0;
                }
            }

            cout << "YES";
        }
    }
}