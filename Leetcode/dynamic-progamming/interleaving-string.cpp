#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string s1, s2, s3;
    int m, n, o;
    bool isInterleave(int i, int j, int k)
    {
        if (k >= o)
            return true;
        bool result = false;
        if (i < m && s1[i] == s3[k])
        {
            result |= isInterleave(i + 1, j, k + 1);
        }
        if (result)
            return true;

        if (j < n && s2[j] == s3[k])
        {
            result |= isInterleave(i, j + 1, k + 1);
        }
        return result;
    }
    bool isInterleave(string s1, string s2, string s3)
    {
        this->s1 = s1;
        this->m = s1.size();
        this->s2 = s2;
        this->n = s2.size();
        this->s3 = s3;
        this->o = s3.size();
        if (this->m > this->o || this->n > this->o || this->m + this->n != this->o)
            return false;
        else
        {
            return isInterleave(0, 0, 0);
        }
    }
};