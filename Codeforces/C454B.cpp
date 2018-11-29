// Problem: LittlePony and Sort by Shift
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int temp;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        cin>>temp;
        vec.push_back(temp);
    }

    int countInversion = 0;
    int index = n-1;
    for(int i = 0; i < n-1; i++) {
        if(vec[i]> vec[i+1]) {
            countInversion++;
            index = i+1;
        }
    }
    
    if(countInversion > 1){
        cout<<"-1";
    } else if(countInversion ==  0) {
        cout<<"0";
    } else if (countInversion == 1) {
        if (vec[0] < vec[n-1]) {
            cout<<"-1";
        } else 
        cout<<(n-index);
    }
    return 0;
}