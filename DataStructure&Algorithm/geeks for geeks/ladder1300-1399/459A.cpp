#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int x1, x2, x3, x4, y1, y2, y3, y4;
	cin>>x1>>y1>>x2>>y2;
	if(x1 != x2 && y1 != y2)
	{
		x3 = x1;
		y3 = y2;
		x4 = x2;
		y4 = y1;
		if((y2-y1)*(y4-y3) + (x4-x3)*(x2-x1) != 0)
		{
			cout<<"-1";
		}
		else
		{
			cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
		}
	}
	else if(x1 == x2 && y1 != y2)
	{
		int d = y2 - y1;
		x3 = x1+d;
		y3 = y1;
		x4 = x2+d;
		y4 = y2;
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	}
	else if(x1 != x2 && y1 == y2)
	{
		int d = x2 - x1;
		x3 = x1;
		y3 = y2+d;
		x4 = x2;
		y4 = y1+d;
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	}
	else
	{
		cout<<"-1";
	}
	return 0;
}
