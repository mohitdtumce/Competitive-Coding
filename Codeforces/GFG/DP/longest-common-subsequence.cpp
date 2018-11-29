#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007

int LCS(string a, string b, int l1, int l2) {
    int lcs[l1+1][l2+1];
    for (int i = 0; i <= l1; i++) {
        for (int j = 0; j <= l2; j++) {
            if (i == 0 || j == 0)
                lcs[i][j] = 0;
            else if (a[i-1] == b[j-1]) {
                lcs[i][j] = 1+lcs[i-1][j-1];
            } else {
                lcs[i][j] = max(lcs[i][j-1], lcs[i-1][j]);
            }
        }
    }
    return lcs[l1][l2];
}
int main() {
    int t, l1, l2;
    string a, b;
    cin>>t;
    while (t--) {
        cin>>l1>>l2;
        cin>>a>>b;
        cout<<LCS(a, b, l1, l2)<<"\n";
    }
}