#include <bits/stdc++.h>
using namespace std;

int palindromePartition(string str) {
    int len = str.size();
    bool dp[len][len];
    int palPart[len];
    int i, j, cl;
    for (i = 0; i < len; i++) {
        palPart[i] = 0;
        dp[i][i] = true;
    }
    
    for (cl = 2; cl <= len; cl++) {
        for (i = 0; i < len - cl + 1; i++) {
            j = i + cl - 1;

            if (str[i] == str[j] && cl == 2)
                dp[i][j] = true;
            else if (str[i] == str[j] && dp[i+1][j-1]) 
                dp[i][j] = true;
        }
    }

    for (int i = 0; i < len; i++) { 
        if (dp[0][i])
            palPart[i] = 0;
        else {
            palPart[i] = INT_MAX;
            for (j = 0; j < i; j++) {
                if (dp[j+1][i] == true && 1 + palPart[j] < palPart[i])
                    palPart[i] = 1 + palPart[j];
            }
        }
    }
    return palPart[len-1] + 1;
}
int main() {
    int t;
    cin>>t;
    string str;
    while (t--) {
        cin>>str;
        cout<<palindromePartition(str)<<"\n";
    }
}