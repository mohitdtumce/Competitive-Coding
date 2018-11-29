#include <bits/stdc++.h>
using namespace std;

bool binaryHeap(int * arr, int i, int n) {
    if (i >= n)
        return true;
    
    bool left, right;
    if (2*i + 1 < n) {
        if (arr[2*i + 1] > arr[i])
            left = false;
        else 
            left = binaryHeap(arr, 2*i + 1, n);
    } else {
        left = true;
    }
    
    if (2*i + 2 < n) {
        if (arr[2*i + 2] > arr[i])
            right = false;
        else 
            right = binaryHeap(arr, 2*i + 2, n);
    } else {
        right = true;
    }
    
    return (left && right);
}
int main()
{
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        cout<<binaryHeap(arr, 0, n)<<"\n";
    }
}