#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int **mat = new int *[n];
    for (int i = 0; i < n; i++)
    {
        mat[i] = new int[n];
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][k] + mat[k][j] < mat[i][j])
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }
    int m, s, g, d;
    cin>>m;
    while (m--) {
        cin>>s>>g>>d;
        cout<<mat[s][g] + mat[g][d]<<" "<<max(0, mat[s][g] + mat[g][d] - mat[s][d])<<"\n";
    }
    return 0;
}