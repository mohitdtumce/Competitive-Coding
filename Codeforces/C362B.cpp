#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    int m;
    cin>>n>>m;
    if (m == 0) {
        cout<<"YES";
    } else {
        vector<long> dirty(m);
        for(int i = 0; i < m; i++) {
            cin>>dirty[i];
        }
        sort(dirty.begin(), dirty.end());
        bool res = true;
        for(int i = 0; i < m-2; i++){
            if(dirty[i+1] == dirty[i] + 1 && dirty[i+2] == dirty[i+1] + 1){
                res = false;
                break;
            }
        }
        if(res) {
            if(dirty[0] == 1 || dirty[m-1] == n)
                cout<<"NO";
            else
                cout<<"YES";
        } else {
            cout<<"NO";
        }
    }
}