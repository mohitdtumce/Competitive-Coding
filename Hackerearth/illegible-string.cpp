#include <bits/stdc++.h>
#include <boost/algorithm/string/replace.hpp>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str1, str2;
    cin>>str1;
    str2 = str1;
    boost::replace_all(str1, "w", "vv");
    boost::replace_all(str1, "vv", "w");
    boost::replace_all(str2, "w", "vv");
    cout<<str1.size()<<" "<<str2.size()<<endl;
    return 0;
}