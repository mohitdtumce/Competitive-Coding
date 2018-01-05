#include <iostream>
using namespace std;

int main()
{
	int x, y, z, a, b, c, d, e, f;
	cin>>x>>a>>b>>c>>y>>d>>e>>f>>z;
	x = (c + d + e + f - a - b)/2;
	y = (a + b + e + f - c - d)/2;
	z = (a + b + c + d - e - f)/2;
	cout<<x<<" "<<a<<" "<<b<<endl;
	cout<<c<<" "<<y<<" "<<d<<endl;
	cout<<e<<" "<<f<<" "<<z<<endl;
	return 0;
}