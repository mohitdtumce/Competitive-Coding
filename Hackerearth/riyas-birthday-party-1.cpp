#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main()
{
	long long int t, n, ans;
	cin >> t;
	while (t--) {
		cin >> n;
		n %= MOD;
		ans = (n * n) % MOD;
		ans = (ans * 2) % MOD;
		ans = (ans - n + MOD) % MOD;
		cout << ans << endl;
	}
	
	return 0;
}