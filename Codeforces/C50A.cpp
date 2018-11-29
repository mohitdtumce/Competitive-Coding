#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, res;
    cin>>m>>n;
    if(m & 1)
        res = n*((m-1)/2) + n/2;
    else 
        res = n*(m/2);
    cout<<res;
}