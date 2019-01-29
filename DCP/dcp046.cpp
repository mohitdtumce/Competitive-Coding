/*
Given a string, find the longest palindromic contiguous substring. 
If there are more than one with the maximum length, return any one.

For example, the longest palindromic substring of "aabcdcb" is "bcdcb". 
The longest palindromic substring of "bananas" is "anana".
*/

#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string str)
{
    int len = str.size();
    bool dp[len][len] = {};
    for (int i = 0; i < len; i++)
        dp[i][i] = true;

    int i, j;
    int maxLen = 1, starti = 0;
    for (int cl = 2; cl <= len; cl++)
    {
        for (i = 0; i < len - cl + 1; i++)
        {
            j = i + cl - 1;
            if (cl == 2)
            {
                if (str[i] == str[j])
                {
                    dp[i][j] = true;
                }
            }
            else
            {
                if (str[i] == str[j] && dp[i + 1][j - 1])
                {
                    dp[i][j] = true;
                }
            }

            if (dp[i][j])
            {
                maxLen = j - i + 1;
                starti = i;
            }
        }
    }

    return str.substr(starti, maxLen);
}
int main()
{
    cout << longestPalindrome("bananas");
    return 0;
}