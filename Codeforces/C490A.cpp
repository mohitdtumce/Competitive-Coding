#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp;
    cin>>n;
    vector<int> prg, mth, pe;
    for(int i = 0; i < n; i++) {
        cin>>temp;
        switch(temp) {
            case 1: prg.push_back(i+1); break;
            case 2: mth.push_back(i+1); break;
            case 3: pe.push_back(i+1); break;
        }
    }
    int count = min(prg.size(), min(mth.size(), pe.size()));
    cout<<count<<"\n";
    for (int i = 0; i < count; i++) {
        cout<<prg[i]<<" "<<mth[i]<<" "<<pe[i]<<"\n";
    }
    return 0;
}