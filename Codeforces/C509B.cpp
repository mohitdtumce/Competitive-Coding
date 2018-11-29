#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);    
    int n, k;
    cin>>n>>k;
    vector<int> vec(n);
    int minv, maxv;
    for(int i = 0; i < n; i++) {
        cin>>vec[i];
        if(i == 0) {
            minv = maxv = vec[i];
        } else {
            minv = min(minv, vec[i]);
            maxv = max(maxv, vec[i]);
        }
    }

    if(maxv - minv > k) {
        cout<<"NO";
    } else {
        cout<<"YES\n";
        int count;
        for (int i = 0; i < n; i++) {
            count = 1;
            for(int j = 0; j < vec[i]; j++) {
                if(j < minv) {
                    cout<<"1 ";
                } else {
                    cout<<count<<" ";
                    count++;
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}