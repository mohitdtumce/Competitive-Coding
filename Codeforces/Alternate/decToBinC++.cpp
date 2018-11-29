#include <bits/stdc++.h>
using namespace std;

string decToBinary(int dec) {
    string res = "";
    while(dec > 0) {
        res += (dec%2 == 1? '1':'0');
        dec /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    vector<int> armies = {46, 59, 38, 5, 13, 54, 26, 62, 18};
    for (int i = 0; i < armies.size(); i++) {
        string binary = decToBinary(armies[i]);
        cout<<binary<<"\n";
    }
    return 0;
}