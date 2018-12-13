#include <bits/stdc++.h>
using namespace std;

vector<int> repeatedNumber(const vector<int> &A) {
    
    vector<bool> visited(A.size(), false);
    vector<int> res;
    for (int i = 0; i < A.size(); i++) {
        if (!visited[A[i]-1]) {
            visited[A[i]-1] = true;
        } else {
            res.push_back(A[i]);
        }
    }
    for (int i = 0; i < visited.size(); i++) {
        if (!visited[i]) {
            res.push_back(i+1);
            break;
        }
    }
    return res;
}


int main() {
    return 0;
}