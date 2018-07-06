#include <bits/stdc++.h>
using namespace std;
unsigned long long int f(unsigned long long int a,unsigned long long int b)
{
    if(b == a+1)
        return (b&a);
    else if(!(b&1))
        return ((b-1)&(b-2));
    else
        return (b&(b-1));
 
}

int main()
{
    unsigned long long int t;
    cin>>t;
    unsigned long long int a,b;
    while(t--)
    {
        cin>>a>>b;
        cout<<f(a,b)<<endl;
    }
    return 0;
}