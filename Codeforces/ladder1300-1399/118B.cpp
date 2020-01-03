#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int row = -n; row <= n; ++row)
	{
		int top = n - abs(row);
		for (int i = 0; i < abs(row); ++i)
		{
			cout <<"  ";
		}
		for (int i = 0; i < top; ++i)
		{
			cout << i << " ";
		}
		for (int i = top; i >= 0; --i)
		{
			cout << i << " ";
		}
		cout<<endl;
	}
return 0;
}