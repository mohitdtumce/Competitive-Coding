#include <bits/stdc++.h>
using namespace std;
int lcs(string X, string Y, int m, int n)
{
    int i, j;
    for(i = 0; i < m; i ++)
    {
        if(X[i] == 'a' || X[i] == 'e' || X[i] == 'i' ||
            X[i] == 'o' || X[i] == 'u')
            {
                X[i] = '$';
            }
    }
    for(i = 0; i < n; i++)
    {
        if(Y[i] == 'a' || Y[i] == 'e' || Y[i] == 'i' ||
            Y[i] == 'o' || Y[i] == 'u')
            {
                Y[i] = '@';
            }
    }
    int L[m+1][n+1];
    for (i=0; i<=m; i++)
    {
        for (j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;
            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
   }
   return L[m][n];
}
int main()
{
    string str1, str2;
    cin>>str1>>str2;
    cout<<lcs(str1, str2, str1.size(), str2.size());
}