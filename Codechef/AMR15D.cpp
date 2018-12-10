#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin>>A[i];
    }   
    sort(A.begin(), A.end());
    int Q, k;
    cin>>Q;
    while (Q--) {
        cin>>k;
        long loot = 0;
        int i = 0, j = n-1;
        while (i <= j) {
            loot += A[i];
            i += 1;
            j -= k;
        }
        cout<<loot<<"\n";
    }
    return 0;
}