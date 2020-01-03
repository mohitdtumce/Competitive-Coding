#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void spiralPrint(int m, int n, int a[4][4])
{
    int i, k = 0, l = 0;
 
    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 
    while (k < m && l < n)
    {
        /* Print the first row from the remaining rows */
        for (i = l; i < n; ++i)
        {
            cout<<a[k][i]<<" ";
        }
        k++;
 
        /* Print the last column from the remaining columns */
        for (i = k; i < m; ++i)
        {
            cout<<a[i][n-1]<<" ";
        }
        n--;
 
        /* Print the last row from the remaining rows */
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                cout<<a[m-1][i]<<" ";
            }
            m--;
        }
 
        /* Print the first column from the remaining columns */
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                cout<<a[i][l]<<" ";
            }
            l++;    
        }        
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4][4];
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cin>>arr[i][j];
            }
        }
        spiralPrint(4,4,arr);
        if(t>0){
            cout<<endl;
        }
    }
    return 0;
}