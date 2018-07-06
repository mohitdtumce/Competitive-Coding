#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    if((str.find("000000") == string::npos) && (str.find("111111") == string::npos))
    {
        
        cout<<"Good luck!";
    }
    else
    {
        cout<<"Sorry, sorry!";   
    }
}