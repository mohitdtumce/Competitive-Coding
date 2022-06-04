#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> romanToIntMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int result = 0, i = 0;
        for (; i < s.length() - 1; i++)
        {
            if (romanToIntMap[s[i]] < romanToIntMap[s[i + 1]])
            {
                result -= romanToIntMap[s[i]];
            }
            else
            {
                result += romanToIntMap[s[i]];
            }
        }
        result += romanToIntMap[s[i]];

        return result;
    }
};