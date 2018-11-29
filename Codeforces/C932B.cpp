#include <bits/stdc++.h>
using namespace std;
#define size 1000001
int res[size][10] = {};
int f(int n)
{
    int res = 1;
    int carry;
    while (n)
    {
        carry = n % 10;
        if (carry)
            res *= carry;
        n = n / 10;
    }
    return res;
}

int g(int n)
{
    if (n < 10)
        return n;
    else
        return g(f(n));
}

int main()
{
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < 10; j++) {
            res[i][j] = res[i-1][j];
        }
        res[i][g(i)]++;
    }
        
    int q, l, r, k, count;
    cin>>q;
    while (q--) {
        cin>>l>>r>>k;
        count = res[r][k] - res[l-1][k];
        cout<<count<<"\n";
    }
    return 0;
}