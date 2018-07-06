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
        int g[n], b[n];
        for(int i = 0; i < n; i++)
            cin>>g[i];
        sort(g, g+n);
        for(int i = 0; i < n; i++)
            cin>>b[i];
        sort(b, b+n, greater<int>());
        long count = 0;
        for(int i = 0; i < n; i++)
        {
            if(g[i]%b[i] == 0 || b[i]%g[i] == 0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}