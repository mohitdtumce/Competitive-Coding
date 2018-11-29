#include <bits/stdc++.h>
using namespace std;

int counter(int n, int m) {
    if (n == m)
        return 0;
    if (n <= 0) { return 0; }

    if (n >= m) {
        return (n - m);
    } else {
        int b = counter(n-1, m) + 1;
        int a = counter(2*n, m) + 1;
        return min(a , b);
    }
}
int main() {
    int n, m;
    cin>>n>>m;
    cout<<counter(n, m);
    return 0;
}