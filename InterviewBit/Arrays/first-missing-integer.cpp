#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int> &A) {
    sort(A.begin(), A.end());
    for (int i = 0; i < A.size(); i++) {
        A[i] -= (A[0] - 1);
    }
    for (int i = 0; i < A.size(); i++) {
        if (A[i] != i+1)
            return (i+1);
    }
    return A.size();
}

int main() {
    return 0;
}