#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long int fact[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    string getPermutation(int n, int k) {
        int i, j, k, idx, delta;
        int result[n];
        for (i = 0; i < n; i++) {
            result[i] = i + 1;
        }

        for (i = 0; i < n; i++) {
            j = i, k = n;
            sort(result + j, result + k);
            idx = k / fact[n - i - 1];
            delta = k % fact[n - i - 1];
            if (delta == 0) {
                continue;
            } else {
                
            }
        }
    }
};