#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long count = 0, temp;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            temp = sqrt(i * i + j * j);
            if ((temp * temp) == (i * i + j * j) && temp <= n)
                count++;
        }
    }
    cout << count;
    return 0;
}