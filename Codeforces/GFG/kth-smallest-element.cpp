#include <bits/stdc++.h>
using namespace std;

int kthSmallestElement(int * arr, int n, int k) {
    priority_queue<int > pq;
    for (int i = 0; i < k; i ++) 
        pq.push(arr[i]);
    
    for (int i = k; i < n; i ++) {
        if (pq.top() >= arr[i]) {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    return pq.top();
}
int main() {
    int t, n, k;
    cin>>t;
    while(t != 0) {
        cin>>n;
        int arr [n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        cin>>k;
        cout<<kthSmallestElement(arr, n, k)<<"\n";
        t -= 1;
    }
	return 0;
}