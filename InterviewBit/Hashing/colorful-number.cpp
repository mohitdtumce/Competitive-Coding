#include <bits/stdc++.h>
using namespace std;


int prodOfDigits(string str) {
    int res = 1;
    for (int i = 0; i < str.size(); i++) {
        res *= (str[i] - '0');
    }
    return res;
}
int colorful(int n) {
    string str = to_string(n);
    map<int, int> mymap;
    int sz, i, pd;
    for (sz = 1; sz <= str.size(); sz++) {
        for (i = 0; i < str.size()-sz+1; i++) {
            pd = prodOfDigits(str.substr(i, sz));
            mymap[pd]++;
            if (mymap[pd] > 1) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    return 0;
}