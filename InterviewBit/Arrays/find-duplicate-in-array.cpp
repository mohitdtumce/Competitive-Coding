#include <bits/stdc++.h>
using namespace std;

int Solution::repeatedNumber(const vector<int> &A) {
    
    vector<bool> visited(A.size(), false);
    for (int i = 0; i < A.size(); i++) {
        if (visited[A[i]]) {
            return A[i];
        } else {
            visited[abs(A[i])] = true;
        }
    }
    return -1;
}

int main() {
    return 0;
}