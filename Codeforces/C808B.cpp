#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin>>a[i];
    long long week = 0, weekSum = 0;
    for (int i = 0; i < k; i++)
        week += a[i];
    weekSum += week;
    for (int i = k; i < n; i++) {
        week += (a[i] - a[i-k]);
        weekSum += week;
    }

    cout<<setprecision(7)<<fixed<<(double(weekSum)/(n-k+1));
    return 0;   
}