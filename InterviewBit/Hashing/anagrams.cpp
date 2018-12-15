#include <bits/stdc++.h>
using namespace std;

string convertHash(string str)
{
    int hash[26] = {};
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i] - 'a']++;
    }
    string res = "";
    for (int i = 0; i < 26; i++)
    {
        res += to_string(hash[i]);
    }
    return res;
}
vector<vector<int>> anagrams(const vector<string> &A)
{
    map<string, vector<int>> mymap;
    string hash;
    for (int i = 0; i < A.size(); i++)
    {
        hash = convertHash(A[i]);
        mymap[hash].push_back(i + 1);
    }
}

int main()
{
    return 0;
}
