#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin>>vec[i];
    
    unordered_set<int> myset;
    for (int i = n-1; i >= 0; i--) {
        myset.insert(vec[i]);
        vec[i] = myset.size();
    }

    int index;
    for (int i = 0; i < m; i++) {
        cin>>index;
        cout<<vec[index-1]<<"\n";
    }
    return 0;
}