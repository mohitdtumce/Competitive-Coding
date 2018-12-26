#include <bits/stdc++.h>
using namespace std;

int main()
{
    string cola[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    long n, i = 1;
    cin >> n;
    while (i * 5 < n)
    {
        n -= i * 5;
        i *= 2;
    }
    int counter = 0;
    while (i < n)
    {
        n -= i;
        counter++;
    }
    cout << cola[counter];
}