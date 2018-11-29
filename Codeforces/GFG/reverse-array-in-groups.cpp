#include <bits/stdc++.h>
using namespace std;

void reverseArrayInGroups(int * arr, int n, int k) {
    int start = 0, end = k;
    for (int start = 0; start < n; start += k) {
        if (start + k > n)
            end = n;
        else   
            end = start + k;
        reverse(arr + start, arr + end);
    }
}

int main() {
    int t, n, k;
    cin>>t;
    while(t != 0) {
        cin>>n>>k;
        int arr [n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        reverseArrayInGroups(arr, n, k);
        for (int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        t -= 1;
    }
	return 0;
}