#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    int hash[26] = {};
    for(int i = 0; i < str.size(); i++)
        hash[str[i] - 'a']++;
    
    int oddChar = 0;
    string winner;
    for(int i = 0; i < 26; i++)
        oddChar += (hash[i]%2);
    
    if(oddChar == 0 || oddChar == 1)
        winner = "First";
    else {
        if (oddChar & 1) {
            winner = "First";
        } else {
            winner = "Second";
        }
    }
    cout<<winner;
    return 0;
}