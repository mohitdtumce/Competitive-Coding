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
        long arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n, greater<int>());
        for(int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}