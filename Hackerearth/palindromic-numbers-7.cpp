#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int i = 0;
    int j = str.size()-1;
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
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int count = 0;
        for(int i = a; i <= b; i++)
        {
            if(isPalindrome(to_string(i)))
                count++;
        }
        cout<<count<<"\n";
    }
}