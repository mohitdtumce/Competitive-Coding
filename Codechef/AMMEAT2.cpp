#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin>>t;
    
    while(t--){
        cin>>n>>k;
        if (k == 1) {
            cout<<"1\n";
        } else if (2*k > n) 
            cout<<"-1\n";
        else {
            for (int ctr = 1; ctr <= k; ctr++) {
                cout<<2*ctr<<" ";
            }
            cout<<"\n";
        }
    }
    
    return 0;
}