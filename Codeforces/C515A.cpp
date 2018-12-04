#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a, b, s;
	cin>>a>>b>>s;
	a = abs(a);
	b = abs(b);
	s -= (a+b);
	if (s < 0) {
		cout<<"No";
	} else if (s == 0) {
		cout<<"Yes";
	} else {
		if (s % 2 == 0) {
			cout<<"Yes";
		} else {
			cout<<"No";
		}
	}
	return 0;
}