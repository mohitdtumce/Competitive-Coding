#include <bits/stdc++.h>
using namespace std;

bool isRotated(vector<int> &A, vector<int> &B, int n, int d)
{
    for (int i = 0; i < n; i++)
    {
        if ((A[i] - d) != B[i])
            return false;
    }
    return true;
}

int main()
{
    int n, L;
    cin >> n >> L;
    vector<int> A(n), B(n);

    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int i = 0; i < n; i++)
        cin >> B[i];

    string a, b;
    for (int i = 1; i < n; i++)
    {
        a += to_string(A[i] - A[i - 1]);
        b += to_string(B[i] - B[i - 1]);
    }
    a += to_string(L - A[n - 1] + A[0]);
    b += to_string(L - B[n - 1] + B[0]);
    a += a;
    if (a.find(b) != string::npos)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}