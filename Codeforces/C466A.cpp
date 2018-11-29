#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
       long long n, m, a, b, ms = 0, ns = 0, score = 0;
       cin >> n >> m >> a >>b;
       ms = (n/m) * b + (n%m != 0) * b;
       ns = n * a;
       score = (n/m) * b + (n%m) * a;
       cout << min(min(ns, ms), score);
       return 0;
}