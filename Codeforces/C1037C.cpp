#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int i = 0;
    long count = 0;
    while (i < n - 1)
    {
        if (a.substr(i, 2) == "10" && b.substr(i, 2) == "01")
        {
            count++;
            a.replace(i, 2, "01");
            i++;
        }
        else if (a.substr(i, 2) == "01" && b.substr(i, 2) == "10")
        {
            count++;
            a.replace(i, 2, "10");
            i++;
        }
        i++;
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}