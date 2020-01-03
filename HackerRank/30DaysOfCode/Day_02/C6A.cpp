#include <bits/stdc++.h>
using namespace std;

bool isNonDegenerateTriangle(int a, int b, int c)
{
    return (a + b > c && b + c > a && c + a > b);
}

bool isDegenerateTriangle(int a, int b, int c)
{
    return (a + b == c || b + c == a || c + a == b);
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (isNonDegenerateTriangle(a, b, c) ||
        isNonDegenerateTriangle(a, b, d) ||
        isNonDegenerateTriangle(a, c, d) ||
        isNonDegenerateTriangle(b, c, d))
    {
        cout << "TRIANGLE";
    }
    else if (isDegenerateTriangle(a, b, c) ||
             isDegenerateTriangle(a, b, d) ||
             isDegenerateTriangle(a, c, d) ||
             isDegenerateTriangle(b, c, d))
    {
        cout << "SEGMENT";
    }
    else
    {
        cout << "IMPOSSIBLE";
    }

    return 0;
}