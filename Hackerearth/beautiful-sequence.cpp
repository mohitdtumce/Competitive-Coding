#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long n, x;
        multiset<long> s;
        multiset<long>::iterator it;
        cin >> n;
        for (long i = 0; i < n; i++) {
            cin >> x;
            if (x - i > 0) 
            {
                x -= i;
                s.insert(x);
                it = s.upper_bound(x);
                if (it != s.end()) s.erase(it);
            }
        }
        cout << n - s.size() << endl;
    }
    return 0;
}