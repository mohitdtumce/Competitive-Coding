#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count4 = 0, count7 = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '4')
            count4++;
        else if (str[i] == '7')
            count7++;
    }
    if (count4 == 0 && count7 == 0)
    {
        cout << "-1";
    }
    else if (count4 >= count7)
    {
        cout << "4";
    }
    else
    {
        cout << "7";
    }
    return 0;
}