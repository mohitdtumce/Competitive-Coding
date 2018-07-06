#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, count;
        cin>>n;
        int arr[n];
        bool visited[n] = {};
        for(i = 0; i < n; i++)
            cin>>arr[i];
        count = 1;
        for(i = 0; i < n; i++)
        {
            if(arr[arr[i] - 1] != i+1)
            {
                count = 0;
            }
        }
        if(count)
        {
            cout<<"inverse\n";
        }
        else
        {
            cout<<"not inverse\n";
        }
    }
}