#include <bits/stdc++.h>
using namespace std;
int arr[1<<20]  = {};
int main()
{
    int n , k, res;
    cin>>n>>k;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i]==0)
        {
            for (int j = i; j <= n;j += i)
                arr[j] += i;   
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(arr[i] == k)
        {
            res++;   
        }
    }
    cout<<res<<"\n"; 
    return 0;
}