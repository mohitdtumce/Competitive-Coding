#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007

void subsetSum(int * set, int n, int sum) {
    bool sub[sum+1][n+1];
    for (int s = 1; s <= sum; s++)
        sub[s][0] = false;
    
    for (int j = 0; j <= n; j++)
        sub[0][j] = true;
    
    for (int s = 1; s <= sum; s++) {
        for (int j = 1; j <= n; j++) {
            sub[s][j] = sub[s][j-1];
            if (s >= set[j-1])
                sub[s][j] = (sub[s][j] || sub[s - set[j-1]][j-1]);
        }
    }
    
    if (sub[sum][n])
        cout<<"YES\n";
    else 
        cout<<"NO\n";
}
int main() {
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            sum += arr[i];
        }

        if (sum & 1) {
            cout<<"NO\n";
        } else {
            subsetSum(arr, n, sum/2);
        }
    }
}