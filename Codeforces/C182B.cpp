#include <bits/stdc++.h>
using namespace std;

int main() {
    int d; cin>>d;
    int n, a; cin>>n;
    long sum = 0;
    for (int i = 0; i < n; i++){
        cin>>a;
        sum += (d - a);
    }
    sum -= (d - a);
    cout<<sum;
    return 0;
}