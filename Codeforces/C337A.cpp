#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    vector<int> jigsaw(m);
    for (int i = 0; i < m; i++)
        cin>>jigsaw[i];
    sort(jigsaw.begin(), jigsaw.end());
    int minDiff = jigsaw[n-1] - jigsaw[0];
    for (int i = 0; i < (m - n + 1); i++) {
        minDiff = min(minDiff, jigsaw[i + n - 1] - jigsaw[i]);
    }
    cout<<minDiff;
    return 0;
}