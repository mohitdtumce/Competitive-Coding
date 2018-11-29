#include <bits/stdc++.h>
using namespace std;

class triplet{
    public:
    long first, second, third;
    triplet() {
        first = second = third = 0;
    }
};
int main() {
    int n;
    cin>>n;
    unordered_map<int, triplet> mymap;
    int temp;
    for (int i = 0; i < n; i++) {
        cin>>temp;
        mymap[temp].first++;
    }

    for (int i = 0; i < n-1; i++) {
        cin>>temp;
        mymap[temp].second++;
    }

    for (auto itr = mymap.begin(); itr != mymap.end(); itr++) {
        if ((itr->second).first == (itr->second).second + 1) {
            cout<<itr->first<<"\n";
            break;
        }
    }

    for (int i = 0; i < n-2; i++) {
        cin>>temp;
        mymap[temp].third++;
    }

    for (auto itr = mymap.begin(); itr != mymap.end(); itr++) {
        if ((itr->second).second == (itr->second).third + 1) {
            cout<<itr->first<<"\n";
            break;
        }
    }
    
    return 0;
}