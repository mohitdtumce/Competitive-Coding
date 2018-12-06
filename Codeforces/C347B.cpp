#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (i == vec[i])
            count++;
    }

    int maxInc = 0;

    for (int i = 0; i < n; i++)
    {
        if (i != vec[i] && vec[i] != vec[vec[i]] && i == vec[vec[i]])
        {
            maxInc = 2;
            break;
        }
        else if (i != vec[i] || vec[i] != vec[vec[i]] && i == vec[vec[i]])
        {
            maxInc = max(maxInc, 1);
        }
    }
    cout << count + maxInc;
    return 0;
}