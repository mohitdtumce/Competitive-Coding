#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long int sum = 0;
    int nextHeight, currHeight = 0;
    for (int i = 0; i < n; i++) {
        cin>>nextHeight;
        sum += abs(nextHeight - currHeight);
        currHeight = nextHeight;
    }
    sum += (2*n - 1);
    cout<<sum;
    return 0;
}