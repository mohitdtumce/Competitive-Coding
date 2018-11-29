#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int> & arr, int n) {
    if (n == 0)
        return 0;
    int currMax = arr[0];
    int maxSum = arr[0];
    for (int i = 1; i < n; i++) {
        currMax = max(currMax + arr[i], arr[i]);
        maxSum = max(maxSum, currMax);
    }
    return maxSum;
}
int main()
{
    int t, n;
    cin>>t;
    while(t != 0) {
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        cout<<kadane(arr, n)<<"\n";
        t -= 1;
    }
	return 0;
}