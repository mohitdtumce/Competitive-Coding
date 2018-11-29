#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n, temp;
    cin>>n;
    map<int, vector<int> > mymap;
    for (int i = 0; i < n; i++) {
        cin>>temp;
        mymap[temp].push_back(i);
    }
    vector<pair<int, int> > vec;
    for (auto itr = mymap.begin(); itr != mymap.end(); itr++) {
        if((itr->second).size() == 1) {
            vec.push_back(make_pair(itr->first, 0));
        } else {
            int d = (itr->second)[1] - (itr->second)[0];
            int sz = itr->second.size();
            bool ap = true;
            for(int j = 0; j < sz - 1; j++) {
                if(((itr->second)[j+1] - (itr->second)[j]) != d){
                    ap = false; 
                    break;
                }
            }
            if(ap){ vec.push_back(make_pair(itr->first, d)); }
        }
    }

    cout<<vec.size()<<"\n";
    for (int k = 0; k < vec.size(); k++) {
        cout<<vec[k].first<<" "<<vec[k].second<<"\n";
    }
    return 0;
}