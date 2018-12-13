#include <bits/stdc++.h>
using namespace std;

vector<int> wave(vector<int> &A) {
    sort(A.begin(), A.end());
    for (int i = 0; i < A.size()-1; i+=2) {
        swap(A[i], A[i+1]);
    }
    return A;
}

int main() {
    return 0;
}