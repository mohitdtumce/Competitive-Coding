#include <bits/stdc++.h>
using namespace std;
#define p 1000000007
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long sum = 3;
        if(n == 1)
        {
            cout<<"3\n";
        }
        else
        {
            for(int i = 1; i < n; i++)
            {
                sum = (sum*2)%p;
            }
            cout<<sum<<"\n";
        }
    }
    return 0;
}