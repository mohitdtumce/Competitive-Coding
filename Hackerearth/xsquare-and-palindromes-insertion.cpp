#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int hash[26] = {};
        for(int i = 0; i < str.size(); i++)
        {
            hash[str[i] - 'a']++;
        }
        int count = 0;
        for(int i = 0; i < 26; i++)
        {
            if(hash[i]%2 == 1)
            {
                count++;
            }
        }
        if(count == 0 || count == 1)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<(count-1)<<"\n";
        }
        
    }
}