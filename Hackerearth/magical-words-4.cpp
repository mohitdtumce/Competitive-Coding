#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    string str;
    int n;
    while(t--)
    {
        cin>>str;
        n = str.size();
        bool table[n][n] = {};
        int count[n+1] = {};
        for (int i = 0; i < n; ++i)
        {
        	table[i][i] = true;
        	count[1]++;
        }
        for (int i = 0; i < n-1; ++i)
	    {
	        if (str[i] == str[i+1])
	        {
	            table[i][i+1] = true;
	            count[2]++;
	        }
	    }
	    for (int k = 3; k <= n; ++k)
	    {
	        for (int i = 0; i < n-k+1 ; ++i)
	        {
	            int j = i + k - 1;
	            if (table[i+1][j-1] && str[i] == str[j])
	            {
	                table[i][j] = true;
	                count[k]++;
	            }
	        }
	    }
	    long sum = 0;
	    for(int i = 1; i <= n; i++)
	    {
	    	sum += count[i]*i*i;
	    }
	    cout<<sum<<"\n";
    }
}