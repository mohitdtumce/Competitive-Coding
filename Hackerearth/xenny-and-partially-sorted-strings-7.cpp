#include <bits/stdc++.h>
using namespace std;
int t, n, k, m;
string str;
bool comp(string a, string b)
{
    for(int i = 0; i < m; i++)
    {
        if(a[i] < b[i])
            return true;
        else if(a[i] > b[i])
            return false;
    }
    return true;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>m;
        vector<string> vec;
        for(int i = 0; i < n; i++)
        {
            cin>>str;
            vec.push_back(str);
        }
        sort(vec.begin(), vec.end(), comp);
        cout<<vec[k-1]<<endl;
    }
}