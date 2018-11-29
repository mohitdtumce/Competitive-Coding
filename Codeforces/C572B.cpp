#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin>>n>>s;
    map<int, int, std::greater<int> > buy, sell;
    char d; int p, q;
    for (int i = 0; i < n; i++) {
        cin>>d>>p>>q;
        if (d == 'B') 
            buy[p] += q;
        else if (d == 'S') 
            sell[p] += q;
    }

    map<int, int>::iterator ritr;
    int count = 0;
    for (ritr = sell.begin(); ritr != sell.end(); ritr++) {
        cout<<"S "<<ritr->first<<" "<<ritr->second<<"\n";
        count++;
        if (count == s)
            break;
    }
    count = 0;
    for (ritr = buy.begin(); ritr != buy.end(); ritr++) {
        cout<<"B "<<ritr->first<<" "<<ritr->second<<"\n";
        count++;
        if (count == s)
            break;
    }
    return 0;
}