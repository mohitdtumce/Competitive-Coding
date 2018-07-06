#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int testCase; 
	cin >> testCase;
    while(testCase--)
    {
        int n, k; 
        cin >> n >> k;
        string str[n];
        string res = "";
        for(int i = 0; i < n; i++)
            cin>>str[i];
        for(int i = 0; i < k; i++)
        {
            int temp, minTemp = INT_MAX;
            char r = 'a';
            for(char ch = 'a'; ch <= 'z'; ch++)
            {
                temp = 0;
                for(int j = 0; j < n; j++)
                {
                    temp += abs(int(ch) - int(str[j][i]));
                }
                if(temp < minTemp)
                {
                    minTemp = temp;
                    r = ch;
                }
            }
            res += r;
        }
        cout<<res<<endl;
    }
    return 0;
}