#include <bits/stdc++.h>
using namespace std;

void subArrayWithGivenSum(int * arr, int n, int reqSum) {
    int i = 0, j = 0, currSum = 0;
    bool found = false;
    while(i < n && j < n) {
        while (i < n && currSum < reqSum) {
            currSum += arr[i];
            i++;
        }

        while (j < i && currSum > reqSum) {
            currSum -= arr[j];
            j++;
        }

        if (currSum == reqSum) {
            found = true;
            break;
        }
    }

    if (found) {
        cout<<j+1<<" "<<i<<"\n";
    } else {
        cout<<"-1\n";
    }
}
int main() {
    int t, n, reqSum;
    cin>>t;
    while(t != 0) {
        cin>>n>>reqSum;
        int arr [n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        subArrayWithGivenSum(arr, n, reqSum);
        t -= 1;
    }
	return 0;
}