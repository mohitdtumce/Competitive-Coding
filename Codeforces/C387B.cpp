#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i, j;
    cin>>n>>m;
    vector<long> a(n), b(m);
    for (i = 0; i < n; i++)
        cin>>a[i];
    for (j = 0; j < m; j++)
        cin>>b[j];
    i = n-1; j = m - 1;
    int count = 0;
    while (i >= 0 && j >= 0) {
        if (a[i] > b[j]){
            count++;
            i--;
        } else {
            i--;
            j--;
        }
    }

    if(i < 0){
        cout<<count;
    } else {
        cout<<count + (i + 1);
    }
    return 0;
}