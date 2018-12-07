#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, i;
    string str;
    cin>>n>>k;
    map<int, bool> mymap;
    map<int, bool>::iterator itr;
    while (k--) {
        cin>>str;
        if (str == "CLICK") {
            cin>>i;
            itr = mymap.find(i);
            if (itr == mymap.end()) {
                mymap[i] = true;
            } else {
                mymap.erase(itr);
            }
        } else if (str == "CLOSEALL"){
            mymap.clear();
        }
        cout<<mymap.size()<<"\n";
    }
    return 0;
}