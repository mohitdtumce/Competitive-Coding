#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    unordered_map<string, int> mymap;
    string name;
    for (int i = 0; i < n; i++) {
        cin>>name;
        mymap[name]++;
        if (mymap[name] == 1){
            cout<<"OK\n";
        } else {
            cout<<name + to_string(mymap[name] - 1)<<"\n";
        }
    }
    return 0;
}