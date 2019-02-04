/*
Run-length encoding is a fast and simple method of encoding strings. 
The basic idea is to represent repeated successive characters as a single count and character. 
For example, the string "AAAABBBCCDAA" would be encoded as "4A3B2C1D2A".

Implement run-length encoding and decoding. 
You can assume the string to be encoded have no digits 
and consists solely of alphabetic characters. 

You can assume the string to be decoded is valid.
*/

#include <bits/stdc++.h>
using namespace std;

string runlengthEncoding(string str)
{
    // Using extra space
    str += '$';
    string res = "";
    int i = 0, j = 0;
    while (i < str.size() && j < str.size())
    {
        if (str[i] == str[j])
            j++;
        else
        {
            res += str[i];
            res += to_string(j - i);
            i = j;
        }
    }
    return res;
}

string runlengthEncodingWithoutExtraSpace(string str)
{
    // Without using extra space
    str += '$';
    int i = 0, j = 0, k = 0;
    while (i < str.size() && j < str.size())
    {
        if (str[i] == str[j])
            j++;
        else
        {
            str[k] = str[i];
            string freq = to_string(j - i);
            k++;
            for (int l = 0; l < freq.size(); l++)
            {
                str[k] = freq[l];
                k++;
            }
            i = j;
        }
    }
    return str.substr(0, k);
}
int main()
{
    cout << runlengthEncoding("AAAABBBCCDAA");
    cout << runlengthEncodingWithoutExtraSpace("AAAABBBCCDAA");
}
