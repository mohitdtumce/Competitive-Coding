#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> price(n);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    sort(price.begin(), price.end());
    int earn = 0, index = 0, count = 0;
    while (index < n && price[index] < 0 && count < m)
    {
        earn -= price[index];
        index++;
        count++;
    }
    cout << earn;
}