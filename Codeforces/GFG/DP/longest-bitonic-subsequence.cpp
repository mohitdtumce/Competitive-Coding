#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007

int longestBitonicSubsequence(int * arr, int n) {
    int lis[n], lds[n];
    for (int i = 0; i < n; i++) {
        lis[i] = 1;
        lds[i] = 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i] && lis[j] + 1 > lis[i]) 
                lis[i] = lis[j] + 1; 
        }
    }

    for (int i = n-2; i >= 0; i--) {
        for (int j = n-1; j > i; j--) {
            if (arr[j] < arr[i] && lds[j] + 1 > lds[i]) 
                lds[i] = lds[j] + 1; 
        }
    }
    
    int maxLen = 1;
    for (int i = 0; i < n; i++) {
        maxLen = max(maxLen, lis[i] + lds[i] - 1);
    }

    return maxLen;
}
int main() {
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin>>arr[i];
        cout<<longestBitonicSubsequence(arr, n)<<"\n";
    }
}