#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {10, 12, 13, 14, 15};
    vector<int>::iterator itr;
    itr = lower_bound(vec.begin(), vec.end(), 10);
    cout<<(itr-vec.begin()) + 1;
    return 0;
}