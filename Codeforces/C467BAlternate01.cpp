// Problem: Fedor and New Game
#include <bits/stdc++.h>
using namespace std;

int main() {
    long n, m, k;
    cin>>n>>m>>k;
    long army;
    vector<long> armies;
    for (long i = 0; i <= m; i++) {
        cin>>army;
        armies.push_back(army);
    }

    int friendCount = 0;
    for (int i = 0; i < m; i++) {
        if ( __builtin_popcount(armies[i] ^ armies[m]) <= k)
            friendCount++;
    }
    cout<<friendCount;
    return 0;
}