#include <bits/stdc++.h>
using namespace std;

void stockBuySell(vector<int> & stock, int n) {
    vector<int> inc(n, 1);
    for (int i = 1; i < n; i++) {
        if (stock[i] >= stock[i-1]) {
            inc[i] = inc[i-1] + 1;
            inc[i-1] = 1;
        }
    }
    bool profit = false;
    for (int i = 1; i < n; i++) {
        if (inc[i] > 1) {
            profit = true;
            cout<<"("<<i-inc[i] + 1<<" "<<i<<") ";
        }
    }
    if (!profit)
        cout<<"No Profit";
}
int main()
{
    int t, n;
    cin>>t;
    while(t != 0) {
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        stockBuySell(arr, n);
        cout<<"\n";
        t -= 1;
    }
	return 0;
}