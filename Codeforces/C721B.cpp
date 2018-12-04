#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mymap;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        mymap[str.size()]++;
    }
    cin >> str;

    map<int, int>::iterator itr = mymap.find(str.size());
    int count = 0;
    for (auto jtr = mymap.begin(); jtr != itr; jtr++)
    {
        count += jtr->second;
    }
    int minVal = (((count/k)*5) + (count+1));
    count += (itr->second - 1);
    int maxVal = (((count/k)*5) + (count+1));
    cout<<minVal<<" "<<maxVal;
}