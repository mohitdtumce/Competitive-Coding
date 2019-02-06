/*
Given an integer k and a string s, find the length of the longest substring 
that contains at most k distinct characters.

For example, given s = "abcba" and k = 2, 
the longest substring with k distinct characters is "bcb".
*/

#include <bits/stdc++.h>
using namespace std;

string longestSubstringWithKDistinctChar(string str, int k)
{
    int i = 0, j = 0, len = str.size(), lmax = 0, index = 0;
    unordered_map<char, int> mymap;
    while (i < len && j < len)
    {
        mymap[str[i]]++;

        while (j <= i && mymap.size() > k)
        {
            if (mymap[str[j]] > 1)
                mymap[str[j]]--;
            else
                mymap.erase(str[j]);
            j++;
        }

        if (i - j + 1 > lmax) {
            index = j;
            lmax = i - j + 1;
        }
        i++;
    }
    return str.substr(index, lmax);
}

int main()
{
    cout<<longestSubstringWithKDistinctChar("abcba", 2);
    return 0;
}
