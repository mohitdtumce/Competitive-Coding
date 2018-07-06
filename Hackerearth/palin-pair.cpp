#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int len = str.size();
    int i = 0;
    int j = len-1;
    while(i < j)
    {
        if(str[i] != str[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    string str, str1, str2;
    map<string, int> mymap;
    for(int i = 0; i < n; i++)
    {
        cin>>str;
        mymap[str]++;
    }
    map<string, int>::iterator i;
    int count = 0, t;
    for(i = mymap.begin(); i != mymap.end(); i++)
    {
        str1 = i->first;
        if(isPalindrome(str1))
        {
            // t = max(0, (((i->second)*(i->second))/2));
            t = 0;
        }
        else
        {
            str2 = i->first;
            reverse(str2.begin(), str2.end());
            t = mymap[str1]*mymap[str2];
        }
        count += t;
    }
    cout<<count/2;
}