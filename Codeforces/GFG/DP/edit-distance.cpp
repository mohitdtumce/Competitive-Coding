#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007

int editDistance(string a, string b, int l1, int l2) {
    int edit[l1+1][l2+1];
    for (int i = 0; i <= l1; i++) {
        for (int j = 0; j <= l2; j++) {
            if (i == 0)
                edit[i][j] = j;
            else if (j == 0)
                edit[i][j] = i;
            else if (a[i-1] == b[j-1]) {
                edit[i][j] = edit[i-1][j-1];
            } else {
                edit[i][j] = 1+ min(edit[i-1][j-1], min(edit[i][j-1], edit[i-1][j]));
            }
        }
    }
    return edit[l1][l2];
}
int main() {
    int t, l1, l2;
    string a, b;
    cin>>t;
    while (t--) {
        cin>>l1>>l2;
        cin>>a>>b;
        cout<<editDistance(a, b, l1, l2)<<"\n";
    }
}