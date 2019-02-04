/*
Write an algorithm to justify text. Given a sequence of words and an integer line length k, 
return a list of strings which represents each line, fully justified.

More specifically, you should have as many words as possible in each line. 
There should be at least one space between each word. 
Pad extra spaces when necessary so that each line has exactly length k. 
Spaces should be distributed as equally as possible, with the extra spaces, 
if any, distributed starting from the left.

If you can only fit one word on a line, then you should pad the right-hand side with spaces.

Each word is guaranteed not to be longer than k.

For example, given the list of words ["the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"] and k = 16, you should return the following:

["the  quick brown",# 1 extra space on the left
"fox  jumps  over", # 2 extra spaces distributed evenly
"the   lazy   dog"] # 4 extra spaces distributed evenly

*/

#include <bits/stdc++.h>
using namespace std;

string insertSpaces(queue<string> &Q, int spaces)
{
    string res = "";
    res = Q.front(); Q.pop();
    while (!Q.empty())
    {
        int pos = Q.size() - 1;
        int a = (spaces / pos);
        int b = (spaces % pos);
        while (Q.size() > 1)
        {
            res += Q.front();
            res += string(a, ' ');
            if (b)
            {
                res += string(1, ' ');
            }
            Q.pop();
        }
        if (Q.size() == 1)
        {
            res = Q.front();
            Q.pop();
        }
    }
    return ("[" + res + "]\n");
}
void justifyText(const vector<string> &words, int k)
{
    int i, j, size = words.size();
    queue<string> Q;
    string res = "";
    for (i = 0; i < size; i++)
    {
        if (Q.empty())
        {
            Q.push(words[i]);
            j += words[i].size();
        }
        else
        {
            if (j + 1 + words[i].size() <= k)
            {
                Q.push(" " + words[i]);
                j += (1 + words[i].size());

                if (j == k)
                {
                    res = "";
                    while (!Q.empty())
                    {
                        res += Q.front();
                        Q.pop();
                    }
                    cout << "[" << res << "]"
                         << "\n";
                    j = 0;
                }
            }
            else
            {
                res = "";
                while (!Q.empty())
                {
                    res += Q.front();
                    Q.pop();
                }
                cout << "[" << res << "]"
                     << "\n";

                Q.push(words[i]);
                j = words[i].size();
            }
        }
    }
}

int main()
{
    // vector<string> vec = {"the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
    // int k = 16;
    // justifyText(vec, k);
    queue<string> Q;
    Q.push("the");
    Q.push(" quick");
    Q.push(" brown");
    cout<<insertSpaces(Q, 18);
    return 0;
}