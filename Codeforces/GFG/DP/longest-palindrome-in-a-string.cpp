#include <bits/stdc++.h>
using namespace std;

string longestPalindromicSubstring(string str) {
    int len = str.size();
    bool dp[len][len] = {};
    memset(dp, false, sizeof(dp));
    int maxLen = 1, start = 0;
    
    for (int i = 0; i < len; i++)
        dp[i][i] = true;
    
    for (int i = 0; i < len-1; i++) {
        if (str[i] == str[i+1]) {
            dp[i][i+1] = true;
            if (maxLen == 1) {
                maxLen = 2;
                start = i;
            }
        }
    }
    for (int cl = 3; cl <= len; cl++) {
        for (int i = 0; i < len - cl + 1; i++) {
            int j = i + cl - 1;
            if (str[i] == str[j] && dp[i+1][j-1]) {
                dp[i][j] = true;
                if (cl > maxLen) {
                    maxLen = cl;
                    start = i;
                }
            }
        }
    }

    // cout<<start<<" "<<len<<"\n";
    // string res = "";
    // for (int i = 0; i < maxLen; i++)
    //     res += str[start + i];
    // return res;
    return str.substr(start, maxLen);
}
int main() {
    int t;
    cin>>t;
    string str;
    while (t--) {
        cin>>str;
        cout<<longestPalindromicSubstring(str)<<"\n";
    }
}