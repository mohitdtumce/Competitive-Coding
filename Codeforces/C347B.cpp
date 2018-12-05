#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (i == vec[i])
            res++;
    }
    int maxInc = 1;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == vec[vec[i]])
        {
            maxInc = 2;
            break;
        }
    }
    cout << res + maxInc;
    return 0;
}