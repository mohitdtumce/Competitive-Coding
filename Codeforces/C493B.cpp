#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    long long sum = 0;
    vector<long> first;
    vector<long> second;
    long attack; 
    bool last;
    while(n) {
        cin>>attack;
        sum += attack;
        if(attack > 0)
            first.push_back(attack);
        else 
            second.push_back(abs(attack));
        
        if(n == 1 && attack > 0)
            last = true;
        else 
            last = false;
        n -= 1;
    }    

    int found = 0;
    if(sum > 0) {
        found = 1;
    } else if(sum < 0) {
        found = 2;
    } else {
        bool k = false;
        for(int i = 0; i < first.size() && i < second.size(); i++) {
            if(first[i] > second[i]) {
                found = 1; k = true;
                break;
            } else if (first[i] < second[i]) {
                found = 2; k = true;
                break;
            }
        }
        if(!k) {
            if(first.size() > second.size()) {
                found = 1;
            } else if (first.size() < second.size()){
                found = 2;
            }
        } 
    }

    switch(found) {
        case 0: if(last){ cout<<"first"; } else { cout<<"second"; }
                break;
        case 1: cout<<"first";
                break;
        case 2: cout<<"second";
                break;
    }
     return 0;
}