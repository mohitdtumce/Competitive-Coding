#include <bits/stdc++.h>
using namespace std;

void maxElement(int * arr, int n, int k) {
    if (n == 0)
        return;
    deque<int> mylist(k);
    for (int i = 0; i < k; i++){
        while (!mylist.empty() && arr[mylist.back()] <= arr[i]) {
            mylist.pop_back();
        }
        mylist.push_back(i);
    }
    for (int i = k; i < n; i++){
        cout<<arr[mylist.front()]<<" "; 
        
        while (!mylist.empty() && mylist.front() <= i - k) {
            mylist.pop_back();
        }
        while (!mylist.empty() && arr[mylist.back()] <= arr[i]) {
            mylist.pop_back();
        }
        mylist.push_back(i);       
    }
    cout<<arr[mylist.front()]<<" "; 
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
        maxElement(arr, n, k);
        cout<<"\n";
        t -= 1;
    }
	return 0;
}