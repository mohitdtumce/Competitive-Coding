#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &A) {
    
    if (A.size() == 0)
        return "";
    if (A.size() == 1)
        return A[0];
        
    string res = "";
    int ctr = 0;
    bool flag = true;
    while (1) {
        char ch = A[0][ctr];
        for (int i = 1; i < A.size(); i++) {
            if ((ctr >= A[i].size()) || (ch != A[i][ctr])) {
                flag = false;
                break;
            }
        }
    }
    if (flag) {
        break;
    } else {
        res += ch;
        ctr++;
    }
    
    return res;
}

int main() {
    return 0;
}