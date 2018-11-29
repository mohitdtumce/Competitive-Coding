#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long double x0, y0, x, y;
    cin>>n>>x0>>y0;
    unordered_set<long double> slope;
    bool perpendicular = false;
    for (int i = 0; i < n; i++) {
        cin>>x>>y;
        if(x == x0) {
            perpendicular = true;
        } else {
            slope.insert((y - y0)/(x - x0));
        }
    }

    if(perpendicular) { cout<<slope.size()+1;}
    else {cout<<slope.size(); }
}