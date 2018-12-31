#include <bits/stdc++.h>
using namespace std;

bool areNonDegerate(int a, int b, int c)
{
    return (a + b > c && b + c > a && c + a > b);
}

int main()
{
    int n, xorsum;
    cin >> n;
    long count = 0;
    set<vector<int> > myset;
    vector<int> temp(3);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            xorsum = i ^ j;
            if (xorsum <= n && areNonDegerate(i, j, xorsum))
            {
                temp[0] = i, temp[1] = j, temp[2] = xorsum;
                sort(temp.begin(), temp.end());
                myset.insert(temp);
            }
        }
    }
    cout << myset.size() << "\n";
}