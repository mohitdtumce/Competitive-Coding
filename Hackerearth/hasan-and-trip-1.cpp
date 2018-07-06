#include <bits/stdc++.h>
using namespace std;

struct triplet
{
    int x, y, f;
};
int main()
{
    int n;
    cin>>n;
    vector<triplet> city;
    triplet temp;
    for(int i = 0 ; i < n; i++)
    {
        cin>>temp.x>>temp.y>>temp.f;
        city.push_back(temp);
    }
    long double Happy[n], Distance[n];
    Happy[0] = city[0].f;
    for(int i = 1; i < n; ++i)
    {
        long double u = abs(city[i].x - city[0].x);
        long double v = abs(city[i].y - city[0].y);
        long double d = sqrt(u*u+v*v);
        Happy[i] = city[i].f + Happy[0] - d;
    }
    for(int i = 1; i < n; ++i)
    {
        for (int j = 1; j < i; ++j)
        {
            long double u = abs(city[i].x - city[j].x);
            long double v = abs(city[i].y - city[j].y);
            long double d = sqrt(u*u+v*v);
            Happy[i] = max(Happy[i], city[i].f - d + Happy[j]);
        }
    }
    cout << std::fixed;
    cout << std::setprecision(6);
    cout<<Happy[n-1]<<"\n";
}