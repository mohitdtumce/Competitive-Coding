#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin>>n>>k;
    string str;
    cin>>str;
    long long hash[26] = {};
    for (int i = 0; i < n; i++) {
        hash[str[i] - 'A']++;
    }
    sort(hash, hash+26, greater<int>());
    long long res = 0;
    for (int i = 0; i < 26; i++) {
        if (k > hash[i]) {
            res += (hash[i]*hash[i]);
            k -= hash[i];
        } else {
            res += (k*k);
            break;
        }
    }

    cout<<res;
}