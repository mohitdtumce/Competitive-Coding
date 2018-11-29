#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007

int maximumSumIncreasingSubsequence(int * arr, int n) {
    int lis[n];
    for (int i = 0; i < n; i++) {
        lis[i] = arr[i];

    }
    int maxSum = lis[0];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i]) 
                lis[i] = max(lis[i], lis[j] + arr[i]); 
        }
        // cout<<lis[i]<<" ";
        maxSum = max(maxSum, lis[i]);
    }
    return maxSum;
}
int main() {
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin>>arr[i];
        cout<<maximumSumIncreasingSubsequence(arr, n)<<"\n";
    }
}