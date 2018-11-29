// Problem: Fedor and New Game
#include <bits/stdc++.h>
using namespace std;

string decToBinary(int dec) {
    string res = "";
    while(dec > 0) {
        res += (dec%2 == 1? '1':'0');
        dec /= 2;
    }
    
    for (int i = res.size(); i < 20; i++) {
        res += '0';
    }
    return res;
}

int differece(string a, string b) {
    int count = 0;
    for(int i = 0; i < 20; i++) {
        count += (a[i] != b[i]);
    }
    return count;
}

int main() {
    long n, m, k;
    cin>>n>>m>>k;
    long army;
    vector<long> armies;
    for (long i = 0; i <= m; i++) {
        cin>>army;
        armies.push_back(army);
    }

    string fedorArmy = decToBinary(armies[m]);
    int friendCount = 0;
    for (int i = 0; i < m; i++) {
        string xi = decToBinary(armies[i]);
        if (differece(fedorArmy, xi) <= k){
            friendCount += 1;
        }
    }
    cout<<friendCount;
    return 0;
}