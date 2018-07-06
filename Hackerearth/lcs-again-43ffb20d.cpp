#include <bits/stdc++.h>
 
using namespace std;
const int N = 501;
int n, m, k, arr1[N], arr2[N], DP[N][N];
int dp(int n, int m){
    
    if(n == 0 || m == 0)    
        return 0;
    int &ans = DP[n][m];
    if(ans != -1)   
        return ans;
    ans = max(dp(n-1, m), dp(n, m-1 ));
    if(arr1[n] == arr2[m])  
        ans = max(ans, 1 + dp(n-1, m-1));
 
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string str1, str2;
    cin>>str1>>str2;
    n = str1.size();
    m = str2.size();
    int k, k1, k2;
    cin>>k1>>k2;
    k = k1 + k2;
    for(int i = 1; i <= n; i++){
        arr1[i] = str1[i-1]; 
    }
    for(int i = 1; i <= m;i++){
        arr2[i] = str2[i-1];
    
    }
    memset(DP, -1, sizeof(DP));
    cout<<min(n,min(m,dp(n, m)+k));
    return 0;
}