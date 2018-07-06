#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long double x, y, z;
    while(t--)
    {
        cin>>x>>y>>z;
        long double a = (x + z - y);
        long double b = (x + y - z);
        long double c = (y + z - x);
        long double area = (0.5*(a*b + b*c + c*a));
        cout << std::fixed;
        cout << std::setprecision(2);
        cout << area <<"\n";
    }
}