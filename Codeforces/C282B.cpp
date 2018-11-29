#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    long n;
    cin>>n;
    long long sumG = 0, sumA = 0;
    int x, y;
    string res = "";
    while(n--) {
        cin>>x>>y;
        if(abs(sumA + x - sumG) <= 500){
            sumA += x;
            res += 'A';
        }
        else{
            sumG += y;
            res += 'G';
        }
    }
    if(abs(sumG - sumA) <= 500) {
        cout<<res;
    } else {
        cout<<"-1";
    }
    return 0;
}