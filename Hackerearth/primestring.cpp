#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
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
            hash[str[i] - 'a']++;
        bool res = true;
        int distinct = 0;
        for(int i = 0; i < 26; i++)
        {
            if(hash[i] > 0)
            {
                distinct ++;
                if(isPrime(hash[i]) == false)
                {
                    res = false;
                    break;
                }
            }
        }
        if(isPrime(distinct) && res)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    
    return 0;
}