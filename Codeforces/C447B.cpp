// Problem: DZY Loves Strings
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    int k;
    cin>>k;
    int temp, value;
    int hash[26] = {};
    for (int i = 0; i < 26; i++) { 
        cin>>temp;
        hash[i] = temp;
        if(i == 0) {
            value = temp;
        } else {
            value = max(value, temp);
        }
    }
    long long sum = 0;
    for(int i = 1; i <= str.size() + k ; i++) {
        if(i <= str.size()) {
            int pos = int(str[i-1] - 'a');
            sum += ((hash[pos])*i);
        } else {
            sum += (value*i);
        }
    }
    cout<<sum;
    return 0;
}