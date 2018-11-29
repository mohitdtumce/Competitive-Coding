#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    int radius[n+1] = {};

    for (int i = 1; i <= n; i++) { cin>>radius[i]; }
    sort(radius, radius+n+1);

    bool doIt = (n & 1)? true:false;
    double area = 0, PI = 3.1415926536;
    for (int i = 1; i <= n; i++) {
        if(doIt == true && i%2 == 1){
            area += PI*((radius[i]*radius[i]) - (radius[i-1]*radius[i-1]));
        } else if(doIt == false && i%2 == 0){
            area += PI*((radius[i]*radius[i]) - (radius[i-1]*radius[i-1]));
        }
    }
    cout<<setprecision(5)<<fixed<<area;
    return 0;
}