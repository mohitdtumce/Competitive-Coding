// Problem: Random Teams
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin>>n>>k;
    long long maxFriends = 0, minFriends = 0;
    if((n - k + 1) & 1)
        maxFriends = (n - k + 1)*((n - k)/2);
    else
        maxFriends = ((n - k + 1)/2)*(n - k);
    
    
    if((n/k) & 1)
        minFriends = (n%k)*((((n/k) + 1)/2)*(n/k)) + (k - (n%k))*((((n/k) - 1)/2)*(n/k));
    else
        minFriends = (n%k)*(((n/k) + 1)*((n/(2*k)))) + (k - (n%k))*(((n/k) - 1)*((n/(2*k))));

    cout<<minFriends<<" "<<maxFriends;
    return 0;
}