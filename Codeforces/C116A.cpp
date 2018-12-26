#include <iostream>
using namespace std;

int main()
{
	int stn;
	cin >> stn;
	int a, b, sum = 0, max = 0;
	while (stn--)
	{
		cin >> a >> b;
		sum += (b - a);
		if (max < sum)
		{
			max = sum;
		}
	}
	cout << max;
	return 0;
}