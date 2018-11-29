#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    if (n == 1) {
        if(k == 0) { cout<<"1"; } 
        else { cout<<"-1"; }
    } else {
        if (n == k) 
            cout<<"-1";
        else if(n - 1 == k) {
            for(int i = 1; i <= n; i++) { cout<<i<<" "; }
        } else {
            cout<<k+2<<" ";
            for(int i = 2; i < k+2; i++) { cout<<i<<" "; }
            for(int i = k+2; i < n; i++) { cout<<i+1<<" "; }
            cout<<"1";
        }
    }
}