#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    if(a.second > b.second) { return true;}
    else if(a.second == b.second) { return (a.first > b.first); } 
    else { return false; }
}

int main() {
    int n; cin>>n;
    vector<pair<int, int> > vec(n);
    for(int i = 0; i < n; i++) {
        cin>>vec[i].first>>vec[i].second;
    }

    sort(vec.begin(), vec.end(), comp);
    long long counter = 1, points = 0;
    int index = 0;
    while(counter > 0 && index < n) {
        counter += (vec[index].second - 1);
        points += (vec[index].first);
        index++;
    }
    cout<<points;
    return 0;
}