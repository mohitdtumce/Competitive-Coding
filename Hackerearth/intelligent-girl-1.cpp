#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int countEven = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '2' || str[i] == '4' || str[i] == '6' || str[i] == '8')
        {
            countEven++;
        }
    }
    for(int i = 0; i < str.size(); i++)
    {
        cout<<countEven<<" ";
        if(str[i] == '2' || str[i] == '4' || str[i] == '6' || str[i] == '8')
        {
            countEven --;
        }
    }
}