#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<long> a(n);
    int maxLen = 2;
    int currLen = 2, prevLen = 2;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        if(i >= 2) {
            if(a[i] == a[i-1] + a[i-2]){
                currLen = prevLen + 1;
            } else {
                currLen = 2;
            }
            prevLen = currLen;
            maxLen = max(maxLen, currLen);
        }
    }
        
    if(n == 1)
        cout<<"1";
    else if(n == 2) {
        cout<<"2";
    } else {
        cout<<maxLen;
    }
}