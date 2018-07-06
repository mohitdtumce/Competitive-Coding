#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char grid[n][n];
        string str;
        int countHash = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>str;
            for(int j = 0; j < n; j++)
            {
                grid[i][j] = str[j];
                if(str[j] == '#')
                    countHash++;
            }
        }
        if(countHash %2 == 1)
        {
            cout<<"NO\n";
        }
        else
        {
            bool found = false;
            int countR = 0, countC = 0;
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(grid[i][j] == '#')
                        countR++;
                    if(grid[j][i] == '#')
                        countC++;
                }
                if((2*countR == countHash) || (2*countC == countHash)){
                    found = true;
                    break;
                }
            }
            if(found)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
}