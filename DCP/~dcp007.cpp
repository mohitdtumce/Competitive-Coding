/*
Given the mapping a = 1, b = 2, ... z = 26, and an encoded message, 
count the number of ways it can be decoded.

For example, the message '111' would give 3, 
since it could be decoded as 'aaa', 'ka', and 'ak'.

You can assume that the messages are decodable. For example, '001' is not allowed.
*/

#include <bits/stdc++.h>
using namespace std;
vector<string> vec = {"10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26"};
long decode(string str)
{
    long res = 0;
    int i = 0;
    while (i < (str.size() - 1))
    {
        if (find(vec.begin(), vec.end(), str.substr(i, 2)) != vec.end())
        {
            res += 2;
        }
        else
        {
            res += 1;
        }
        i++;
    }
    return res;
}
int main()
{

    cout<<decode("111");
    return 0;
}