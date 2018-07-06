#include <bits/stdc++.h>
#define p 1000000007
using namespace std;
 
int main()
{
    string str;
    long long i = 0, j, len, pw[100001], sum, ans, tmp, power;
    vector<long long> semicolon;
    vector<long long> space;
    cin>>str;
    len = str.length();
    while(i < len && str[i] != ';') {
        i++;
    }
    while(i<len) 
    {
        if(str[i] == ';') 
        {
            j = i+1;
            while(j < len && str[j] == ';') 
            {
                j++;
            }
            semicolon.push_back(j-i);
            i = j;
        }
        else 
        {
            j = i + 1;
            while(j < len && str[j] == '_') 
            {
                j++;
            }
            space.push_back(j-i);
            i = j;
        }
    }
    pw[0] = 1;
    for(i = 1; i <= len; i++) {
        pw[i] = (2LL * pw[i-1]) % p;
    }
    len = semicolon.size();
    ans = 0;
    power = 0;
    sum = 0;
    for(i = len-2; i >= 0; i--) {
        tmp = ((pw[space[i]]-1)*semicolon[i+1]);
        tmp = (tmp + (pw[space[i]]*power)%p + ((pw[space[i]]-1)*sum)%p )%p;
        power = tmp;
        tmp = (tmp*semicolon[i])%p;
        ans = (ans+tmp)%p;
        sum += semicolon[i+1];
    }
    cout<<ans;
    return 0;
}