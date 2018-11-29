#include <bits/stdc++.h>
using namespace std;

class triplet{
    public:
        int index, taxiCount, pizzaCount, girlCount;
};

int classifier(string pNumber){
    if(pNumber[0] == pNumber[1] && pNumber[1] == pNumber[3] && pNumber[3] == pNumber[4] 
        && pNumber[4] == pNumber[6] && pNumber[6] == pNumber[7])
        return 0;
    else if(pNumber[0] > pNumber[1] && pNumber[1] > pNumber[3] && pNumber[3] > pNumber[4] 
        && pNumber[4] > pNumber[6] && pNumber[6] > pNumber[7])
        return 1;
    return 2;
}
bool comp(pair<string, int> a, pair<string, int> b) {
    return a.second < b.second;
}
int main() {
    ios_base::sync_with_stdio(false);
    int f;
    cin>>f;
    unordered_map<string, triplet> mymap;
    int s; 
    string fName, pNumber;
    vector<pair<string, int> > friendTaxi, friendPizza, friendGirl;
    int maxTaxi = 0, maxPizza = 0, maxGirl = 0;
    for(int j = 0; j < f; j++){
        cin>>s>>fName;
        for(int i = 0; i < s; i++) {
            cin>>pNumber;
            switch(classifier(pNumber)) {
                case 0: mymap[fName].taxiCount++; break;
                case 1: mymap[fName].pizzaCount++; break;
                case 2: mymap[fName].girlCount++; break;
            }
        }
        mymap[fName].index = j;
        maxTaxi = max(maxTaxi, mymap[fName].taxiCount);
        maxPizza = max(maxPizza, mymap[fName].pizzaCount);
        maxGirl = max(maxGirl, mymap[fName].girlCount);        
    }
    for (auto itr = mymap.begin(); itr != mymap.end(); itr++) {
        if(itr->second.taxiCount == maxTaxi)
            friendTaxi.push_back(make_pair(itr->first, itr->second.index));
        if (itr->second.pizzaCount == maxPizza)
            friendPizza.push_back(make_pair(itr->first, itr->second.index));
        if (itr->second.girlCount == maxGirl)
            friendGirl.push_back(make_pair(itr->first, itr->second.index));
    }
    sort(friendTaxi.begin(), friendTaxi.end(), comp);
    sort(friendPizza.begin(), friendPizza.end(), comp);
    sort(friendGirl.begin(), friendGirl.end(), comp);
    cout<<"If you want to call a taxi, you should call: ";
    for (int i = 0; i < friendTaxi.size(); i++) {
        if (i == friendTaxi.size() - 1)
            cout<<friendTaxi[i].first<<".\n";
        else {
            cout<<friendTaxi[i].first<<", ";            
        }
    }
    cout<<"If you want to order a pizza, you should call: ";
    for (int i = 0; i < friendPizza.size(); i++) {
        if (i == friendPizza.size() - 1)
            cout<<friendPizza[i].first<<".\n";
        else {
            cout<<friendPizza[i].first<<", ";            
        }
    }
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for (int i = 0; i < friendGirl.size(); i++) {
        if (i == friendGirl.size() - 1)
            cout<<friendGirl[i].first<<".\n";
        else {
            cout<<friendGirl[i].first<<", ";            
        }
    }
    return 0;
}