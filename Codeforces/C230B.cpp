// Problem: T-Primes
#include <bits/stdc++.h>
using namespace std;
#define seiveSize 1000001

int main() {
    int n;
    cin>>n;
    long long t;
    bool prime[1000000+1] = {}; 
    prime[1] = true;
    for (long p = 2; p*p <= 1000001; p++) { 
        if (prime[p] == false) { 
            for (long i = p*2; i <= 1000001; i += p) 
                prime[i] = true; 
        } 
    }

    for(int i = 0; i < n; i++) {
        cin>>t;
        long long sqrRoot = (long long)(sqrt(t));    
        if(sqrRoot*sqrRoot == t && prime[sqrRoot] == false){
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}