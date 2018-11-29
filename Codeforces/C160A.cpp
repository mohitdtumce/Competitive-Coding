#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;
    cin>>n;
    vector<int> coin(n);
    for(int i = 0; i < n; i++){
        cin>>coin[i];
        sum += coin[i];
    }
    sort(coin.begin(), coin.end(), greater<int>());
    int currSum = 0, index = 0;
    sum /= 2;
    cout<<currSum<<" "<<sum<<"\n";
    while (currSum <= sum && index < n) {
        currSum += coin[index];
        index++;
    }
    cout<<index;
    return 0;
}
