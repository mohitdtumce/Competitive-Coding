#include <bits/stdc++.h>
using namespace std;

long long convertToPattern(string pattern)
{
    string res = "";
    for (int i = 0; i < pattern.size(); i++) {
        if (pattern[i] == '0' || pattern[i] == '2' || pattern[i] == '4' || pattern[i] == '6' || pattern[i] == '8') {
            res += '0';
        } else {
            res += '1';
        }
    }
    return stoll(res);
}

int main()
{
    long t;
    cin >> t;
    map<long long, long> mymap;
    char ch;
    long long input;
    string pattern, temp;
    while (t--)
    {
        cin >> ch >> pattern;
        switch (ch)
        {
        case '+':
            mymap[convertToPattern(pattern)]++;
            break;
        case '-':
            mymap[convertToPattern(pattern)]--;
            break;
        case '?':
            cout<<mymap[stoll(pattern)]<<"\n";
            break;
        }
    }
    return 0;
}