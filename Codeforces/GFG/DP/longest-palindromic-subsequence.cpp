#include <bits/stdc++.h>
using namespace std;

int longestPalindromicSubsequence(string str) {
    int len = str.size();
    int dp[len][len];

    for (int i = 0; i < len; i++)
        dp[i][i] = 1;
    for (int cl = 2; cl <= len; cl++) {
        for (int i = 0; i < len - cl + 1; i++) {
            int j = i + cl - 1;
            if (str[i] == str[j] && cl == 2) 
                dp[i][j] = 2;
            else if (str[i] == str[j])
                dp[i][j] = 2 + dp[i+1][j-1];
            else
                dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
        }
    }

    return dp[0][len-1];
}
int main() {
    int t;
    cin>>t;
    string str;
    while (t--) {
        cin>>str;
        cout<<longestPalindromicSubsequence(str)<<"\n";
    }
}