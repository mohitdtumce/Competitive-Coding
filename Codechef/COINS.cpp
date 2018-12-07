#include <bits/stdc++.h>
using namespace std;

// Recursicve solution faced TLE
// unsigned long long maxProfit(unsigned long long n) {
//     if (n <= 4)
//         return n;
//     else {
//         return max(n, maxProfit(n/2) + maxProfit(n/3) + maxProfit(n/4));
//     }
// }

// DP Solution
map<unsigned long, unsigned long> mymap;
unsigned long maxProfit(unsigned long n) {
    if (n <= 4)
        return n;
    else if (mymap.find(n) != mymap.end())
        return mymap[n];
    else {
        unsigned long p = max(n, maxProfit(n/2) + maxProfit(n/3) + maxProfit(n/4));
        mymap[n] = p;
        return p;
    }
} 
int main(int argc, char const *argv[])
{
    unsigned long n;
    while (cin>>n) {
        cout<<maxProfit(n)<<"\n";
    }
    return 0;
}
