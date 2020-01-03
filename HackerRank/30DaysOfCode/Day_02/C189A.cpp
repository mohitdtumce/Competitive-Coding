#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int maxPieces = 1;
    for (int i = 0; i <= n / a; i++)
    {
        for (int j = 0; j <= (n - i * a) / b; j++)
        {
            if (((n - i * a - j * b) % c) == 0) {
                maxPieces = max(maxPieces, i + j + ((n - i * a - j * b) / c));
            }
        }
    }
    cout<<maxPieces;
    return 0;
}