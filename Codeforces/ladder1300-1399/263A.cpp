#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[5][5];
	int x, y;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cin>>arr[i][j];
			if(arr[i][j] == 1)
			{
				x = i+1;
				y = j+1;
			}
		}
	}
	cout<<(abs(x - 3)+ abs(y - 3));
	return 0;
}
