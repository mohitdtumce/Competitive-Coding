#include <bits/stdc++.h>
using namespace std;

int main() {
    FILE *inputFile, *outputFile;
    inputFile = freopen("input.txt", "r", stdin);
    outputFile = freopen("output.txt", "w", stdout);
    int n, k, a, sz;
    fscanf(inputFile, "%d %d", &n, &k);
    map<int, vector<int>, greater<int> > mymap;
    for (int i = 1; i <= n; i++) {
        fscanf(inputFile, "%d", &a);
        mymap[a].push_back(i);
    }
    auto itr = mymap.begin();
    vector<int> res;
    int sol;
    while(itr != mymap.end() && k > 0) {
        sz = 0;
        while (sz < min(k, int((itr->second).size()))) {
            sol = (itr->first);
            res.push_back((itr->second)[sz]); 
            sz++;
        }
        k -= sz;
        itr++;
    }
    fprintf(outputFile, "%d\n", sol);
    for (int i = 0; i < res.size(); i++) {
        fprintf(outputFile, "%d ", res[i]);
    }
    return 0;
}
