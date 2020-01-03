#include <bits/stdc++.h>
using namespace std;

int main() {
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	double p=(1-(a/b));
	double q=(1-(c/d));
	printf("%0.8lf",((1-p)/(1-p*q)));
	return 0;
}