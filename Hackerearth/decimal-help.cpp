#include <bits/stdc++.h>
using namespace std;
     
int calc(long int N,long int D,long int R)
{
    if(N <= 0)
        return 0;
    long temp;
    temp = N/D;
    N = N - temp*D;
    while(R != 0)
    {
        int found = 0;
        if(N < D)
        {
            if(found)
                goto l;
            N=N*10;
            found = true;
        }
        temp = N/D;
        N = N - temp*D;
        l:
        R--;
    }
    return temp;
}

int main()
{
    long t, R, N, D;
    cin>>t;
    while(t--)
    {
        cin>>N>>D>>R;
        cout<<calc(N,D,R)<<endl;
    }
    return 0;
}