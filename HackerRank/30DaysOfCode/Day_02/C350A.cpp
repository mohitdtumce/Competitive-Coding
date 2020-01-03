#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int mina = 101, maxa = 0, minb = 101, temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mina = min(mina, temp);
        maxa = max(maxa, temp);
    }

    for (int j = 0; j < m; j++)
    {
        cin >> temp;
        minb = min(minb, temp);
    }

    // cout<<mina<<" "<<maxa<<" "<<minb<<"\n";
    if (max(2 * mina, maxa) < minb)
    {
        cout << max(2 * mina, maxa);
    }
    else
    {
        cout << "-1";
    }
    return 0;
}