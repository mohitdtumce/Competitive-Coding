#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007

int knapsack(int W, int * price, int * weight, int n) {
    int dp[W+1][n+1] = {};
    for (int w = 0; w < W+1; w++) {
        for (int i = 0; i < n+1; i++) {
            if (w == 0 || i == 0) 
                dp[w][i] = 0;
            else if (w >= weight[i-1])
                dp[w][i] = max(price[i-1] + dp[w - weight[i-1]][i-1], dp[w][i-1]);
            else
                dp[w][i] = dp[w][i-1];
        }
    }
    return dp[W][n];
}
int main() {
    int t, N, W;
    cin>>t;
    while (t--) {
        cin>>N>>W;
        int price[N];
        for (int i = 0; i < N; i++)
            cin>>price[i];
        
        int weight[N];
        for (int i = 0; i < N; i++)
            cin>>weight[i];
        
        cout<<knapsack(W, price, weight, N)<<"\n";
    }
}