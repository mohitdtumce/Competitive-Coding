#include <iostream>
using namespace std;

int main()
{
	int f;
	cin>>f;
	int x,y,z;
	int sx = 0, sy = 0, sz = 0;
	while(f--)
	{
		cin>>x >>y >>z;
		sx += x;
		sy += y;
		sz += z;
	}
	if(sx == 0 && sy == 0 && sz == 0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
