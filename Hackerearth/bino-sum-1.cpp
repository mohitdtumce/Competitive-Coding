#include <bits/stdc++.h>
using namespace std;
#define p 1000000007
long long dp[1001][1001] = {};
void factorial()
{
    for(int i = 1; i <= 1000 ; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = ((dp[i-1][j])%p + (dp[i-1][j-1])%p)%p;
        }
    }
}
// int binomialCoeff(int n, int k)
// {
//     int C[n+1][k+1];
//     int i, j;
//     for (i = 0; i <= n; i++)
//     {
//         for (j = 0; j <= min(i, k); j++)
//         {
//             if (j == 0 || j == i)
//                 C[i][j] = 1;
//             else
//                 C[i][j] = ((C[i-1][j-1] % p)+ (C[i-1][j] % p)) % p;
//         }
//     }
 
//     return C[n][k];
// }
int main()
{
    int t;
    cin>>t;
    factorial();
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        long long sum = 0;
        for(int i = 0; i <= k; i++)
        {
            sum = ((sum % p) + (dp[n][i] % p))%p;
        }
        cout<<sum<<"\n";
    }
}