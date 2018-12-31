#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    for (long i = 0; i <= n/1234567; i++) {
        for (long j = 0; j <= (n - 1234567*i)/123456; j++) {
            if ((n - i*1234567 - j*123456) % 1234 == 0) {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}