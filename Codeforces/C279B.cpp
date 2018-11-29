#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; long t;
    cin>>n>>t;
    vector<int> estdTime(n);
    for(int i = 0; i < n; i++) {
        cin>>estdTime[i];
    }

    int start = 0, end = 0, book = 0;
    while (end < n) {
        while (end < n && t > 0) {
            t -= estdTime[end];
            if(t >= 0) {
                book = max(book, end - start + 1);
            }
            end++;
        }

        while (start <= end && t <= 0) {
            t += estdTime[start];
            start++;
        }
    }
    cout<<book;
    return 0;
}