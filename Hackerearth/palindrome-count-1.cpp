#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
    while(start < end)
    {
        if(str[start] != str[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string str;
    cin>>str;
    int count = 0;
    for(int i = 0; i < str.size(); i++)
    {
        for(int j = i; j < str.size(); j++)
        {
            if(isPalindrome(str, i, j))
                count++;
        }
    }
    cout<<count;
}