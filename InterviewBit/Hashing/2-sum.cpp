#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(const vector<int> &A, int k) {
    map<int, int> mymap;

    vector<pair<int, int> > res;
    for (int i = 0; i < A.size(); i++) {
        if (mymap.find(k - A[i]) != mymap.end()) {
            res.push_back(make_pair(max(i+1, mymap[k-A[i]]), min(i+1, mymap[k-A[i]])));
        }
        if (mymap.find(A[i]) == mymap.end()) {
            mymap[A[i]] = i+1;   
        }
    }
    vector<int> vec;
    if (res.size() >= 1) {
        sort(res.begin(), res.end());
        vec.push_back(res[0].second);
        vec.push_back(res[0].first);
    }
    return vec;
}

int main() {
    return 0;
}