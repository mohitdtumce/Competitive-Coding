#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double a, b, c, d;
	cin>>a>>b>>c>>d;
	double ans = (a*d)/(b*c + a*d - a*c);
	cout<<ans;
	return 0;
}
