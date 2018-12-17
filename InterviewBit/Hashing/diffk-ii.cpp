#include <bits/stdc++.h>
using namespace std;

int diffPossible(const vector<int> &A, int k) {
    map<int, bool> mymap;
    for (int i = 0; i < A.size(); i++) {
        if (mymap.find(k+A[i]) != mymap.end()) {
            return true;
        }
        if (mymap.find(-k  + A[i]) != mymap.end()) {
            return true;
        }
        
        if (mymap.find(A[i]) == mymap.end()) {
            mymap[A[i]] = true;
        }
    }
    
    return false;
}

int main() {
    return 0;
}