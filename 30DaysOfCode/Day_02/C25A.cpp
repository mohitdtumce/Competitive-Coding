#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int oddCount = 0, evenCount = 0, oddIndex, evenIndex, temp;
    for (int i = 0; i < n; i++) {
        cin>>temp;
        if (temp & 1) {
            oddCount++;
            oddIndex = i+1;
        } else {
            evenCount++;
            evenIndex = i+1;
        }
    }

    if (oddCount == 1) {
        cout<<oddIndex;
    }

    if (evenCount == 1) {
        cout<<evenIndex;
    }
    return 0;
}