#include <bits/stdc++.h>
using namespace std;

long steps(long double dist, long double maxDist) {
    if (dist == 0)
        return 0;
    if(dist <= maxDist)
        return 1;
    return long(dist/maxDist) + steps(dist - (long(dist/maxDist))*maxDist, maxDist);
}
int main() {
    long double r, x1, y1, x2, y2;
    cin>>r>>x1>>y1>>x2>>y2;
    long double dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    long double maxDist = 2*r;
    cout<<steps(dist, maxDist);
    return 0;
}