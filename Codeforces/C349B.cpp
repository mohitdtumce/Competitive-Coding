#include <bits/stdc++.h>
using namespace std;
map<int, int> mymap;
void bestNumber(int color, string res) {
    if (color == 0)
        return;
    else {
        string temp;
        for (auto itr = mymap.begin(); itr != mymap.end(); itr++) {
            if (itr->first <= color) {
                string a = "", b = "";
                bestNumber(color - itr->first, a);
                temp = to_string(itr->second) + a;
                sort(temp.begin(), temp.end(), greater<char>());
                // cout<<temp<<"\n";
                if (res < temp) {
                    res = temp;
                }
            }
        }
    }
}
int main() {
    int color, ad;
    cin>>color;
    for(int i = 1; i <= 9;i++) { cin>>ad; mymap[ad] = i; }
    if(color < (mymap.begin())->first) {
        cout<<"-1";
    } else {
        // for(auto itr = mymap.begin(); itr != mymap.end(); itr++) 
        //     cout<<itr->first<<" "<<itr->second<<"\n";
        string res = "";
        bestNumber(color, res);
        cout<<res;
    }
    
    return 0;
}