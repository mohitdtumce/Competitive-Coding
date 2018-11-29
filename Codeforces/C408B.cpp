#include <bits/stdc++.h>
using namespace std;

int main() {
    string n, m;
    cin>>n>>m;
    int hashn[26] = {};
    int hashm[26] = {};
    for (int i = 0; i < n.size(); i++) { hashn[n[i] - 'a']++; }   
    for (int j = 0; j < m.size(); j++) { hashm[m[j] - 'a']++; }

    int area = 0;
    for(int k = 0; k < 26; k++) {
        if(hashn[k] == 0 && hashm[k] != 0){
            area = -1;
            break;
        }
        area += min(hashn[k], hashm[k]);
    }
    cout<<area;
    return 0;
}