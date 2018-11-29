#include <bits/stdc++.h>
using namespace std;
#define double long double
#define repi(i,a,b) for(int i = (int)(a); i < (int)(b); i++)
#define rep(i,a) repi(i,0,a)

int n, m;
double ans, p, q;

double solve(){
    if(m==1) return 1.;
    ans = 0; p = m; q = n;
    rep(i,m) {
        double k = i+1;
        ans += k*(pow(k/p,q)-pow(1.*i/p,q));
    }
    return ans;
}

void input(){
    cin >> m >> n;
}

int main(){
    cin.sync_with_stdio(0);
    cout << fixed << setprecision(12);
    input();
    cout << solve() << endl;
    return 0;
}
