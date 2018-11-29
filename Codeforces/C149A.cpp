#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin>>k;
    int a[12] = {};
    for(int i = 0; i < 12; i++) 
        cin>>a[i];
    sort(a, a+12, greater<int>());
    int index = 0;
    while (k > 0 && index < 12) {
        k -= a[index];
        index++;
    }

    if(k > 0)
        cout<<"-1";
    else 
        cout<<index;
    return 0;
}