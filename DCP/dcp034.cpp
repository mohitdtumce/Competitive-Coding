/*
Given a string, find the palindrome that can be made by inserting 
the fewest number of characters as possible anywhere in the word. 

If there is more than one palindrome of minimum length that can be made, 
return the lexicographically earliest one (the first one alphabetically).

For example, given the string "race", you should return "ecarace", 
since we can add three letters to it (which is the smallest amount to make a palindrome). 

There are seven other palindromes that can be made from "race" by adding three letters, 
but "ecarace" comes first alphabetically.

As another example, given the string "google", you should return "elgoogle".
*/

#include <bits/stdc++.h>
using namespace std;

pair<int, int> findPalindrome(string str)
{
    int len = str.size();
    bool dp[len][len] = {};
    int i, j, cl, start, maxLen = 1;
    for (i = 0; i < len; i++)
        dp[i][i] = true;

    for (cl = 2; cl <= len; cl++)
    {
        for (i = 0; i < len - cl + 1; i++)
        {
            j = i + cl - 1;

            if (str[i] == str[j] && cl == 2)
            {
                dp[i][j] = true;
            }
            else if (str[i] == str[j])
            {
                dp[i][j] = dp[i + 1][j - 1];
            }

            if (dp[i][j] && maxLen < (j - i + 1))
            {
                maxLen = j - i + 1;
                start = i;
            }
        }
    }

    return make_pair(start, start + maxLen - 1);
}

string mergeStrings(string a, string b)
{
    if (a == "")
        return b;
    if (b == "")
        return a;

    string res = "";
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            res += a[i];
            i++;
        }
        else if (a[i] > b[j])
        {
            res += b[j];
            j++;
        }
        else
        {
            res += (a[i] + b[j]);
            i++;
            j++;
        }
    }

    while (i < a.size())
    {
        res += a[i];
        i++;
    }

    while (j < b.size())
    {
        res += b[j];
        j++;
    }

    return res;
}

string convertToPalindrome(string str)
{
    pair<int, int> palin = findPalindrome(str);
    string first = "", second = "";
    if (palin.first > 0)
        first = str.substr(0, palin.first);
    if (palin.second < str.size() - 1)
        second = str.substr(palin.second + 1, str.size() - palin.second - 1);
    reverse(second.begin(), second.end());
    string res = mergeStrings(first, second);
    string palindrome = str.substr(palin.first, palin.second - palin.first + 1);
    palindrome = res + palindrome;
    reverse(res.begin(), res.end());
    palindrome = palindrome + res;
    return palindrome;
}

int main()
{
    cout << convertToPalindrome("race") << "\n";
    return 0;
}