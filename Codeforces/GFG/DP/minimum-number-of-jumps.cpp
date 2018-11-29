#include <bits/stdc++.h>
using namespace std;

int minJumps(int * arr, int n) {
    int jumps[n];
    if (n == 0)
        return 0;
    
    if (arr[0] == 0)
        return -1;
    
    jumps[0] = 0;
    for (int i = 1; i < n; i++) {
        jumps[i] = INT_MAX;
        for (int j = 0; j < i; j++) {
            if (arr[j] + j >= i && jumps[j] != INT_MAX) {
                jumps[i] = min(jumps[i], jumps[j] + 1);
            }
        }
    }
    if (jumps[n-1] == INT_MAX)
        return -1;
    return jumps[n-1];
}
int main() {
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin>>arr[i];

        cout<<minJumps(arr, n)<<"\n";   
    }
}