#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int counter;
    void numDecodings(string &s, int i)
    {
        if (i >= s.size())
        {
            counter += (i == s.size());
            return;
        }

        if (s[i] != '0')
        {
            numDecodings(s, i + 1);
            if (i + 1 < s.size() && stoi(s.substr(i, 2)) <= 26)
                numDecodings(s, i + 2);
        }
    }
    int numDecodings(string s)
    {
        counter = 0;
        numDecodings(s, 0);
        return counter;
    }
};