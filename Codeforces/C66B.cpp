#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> vec(n);
    vector<int> lis(n, 1);
    vector<int> rds(n, 1);
    for (int i = 0; i < n; i++) {
        cin>>vec[i];
    }

    for(int i = 1; i < n; i++) {
        if (vec[i] >= vec[i-1])
            lis[i] = lis[i-1] + 1;
    }
    
    int maxSection = 1;
    for (int i = n - 1; i >= 0; i--) {
        if(i <= n-2) {
            if(vec[i] >= vec[i+1])
                rds[i] = rds[i+1] + 1;
        }
        maxSection = max(maxSection, (lis[i] + rds[i] - 1));
    }

    cout<<maxSection;
}