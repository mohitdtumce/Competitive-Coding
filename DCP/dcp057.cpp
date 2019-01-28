/*
Given a string s and an integer k, break up the string into multiple texts 
such that each text has a length of k or less. 

You must break it up so that words don't break across lines. 
If there's no way to break the text up, then return null.

You can assume that there are no spaces at the ends of the string and 
that there is exactly one space between each word.

For example, given the string "the quick brown fox jumps over the lazy dog" and k = 10, you should return: ["the quick", "brown fox", "jumps over", "the lazy", "dog"]. No string in the list has a length of more than 10.
*/

#include <bits/stdc++.h>
using namespace std;

// I am breaking the word at every space.
// Incase I find that the size of word is greater than k, return empty vector.
vector<string> breakWords(string str, int k)
{
    str += ' ';
    vector<string> vec;
    string temp = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            vec.push_back(temp);
            temp = "";
        }
        else
        {
            temp += str[i];
            if (temp.size() > k)
            {
                return {};
                //return vector<string>();
            }
        }
    }
    return vec;
}

int main()
{
    string str = "the quick brown fox jumps over the lazy dog";
    int k = 10;
    vector<string> res = breakWords(str, k);
    if (res.size() == 0)
        cout<<"NOT POSSIBLE";
    else {
        cout<<"{ ";
        for (auto itr = res.begin(); itr != res.end(); itr++) {
            cout<<*itr<<", ";
        }
        cout<<"}";
    }
    return 0;
}