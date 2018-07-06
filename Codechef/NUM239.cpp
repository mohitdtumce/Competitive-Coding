#include <iostream>
using namespace std;

// int NUM239(int num)
// {
// 	int count = 0;
// 	int count1 = 0;
// 	int unit = num%10;
// 	num = num/10;
// 	int itr = 1;
// 	while (num)
// 	{
// 		unit = num % 10;
// 		count += (unit*itr*3);
// 		itr *= 10;
// 		num /= 10;
// 	}
// 	if (unit == 9)
// 		count += 3;
// 	else if (unit >= 3)
// 		count += 2;
// 	else if (unit == 2)
// 		count += 1;
// 	return count;
// }

int arr[100001] = {};
void NUM239()
{
	for (int i = 1; i < 100001; i++)
	{
		if (i == 1)
			arr[i] = 0;
		else
		{
			if (i%10 == 2 || i%10 == 3 || i%10 == 9)
				arr[i] = arr[i-1] + 1;
			else
				arr[i] = arr[i-1];
		}
	}
}
int main(int argc, char const *argv[])
{
	int T, L, R;
	NUM239();
	// cin>>T;
	// NUM239();
	// while (T--)
	// {
	// 	cin>>L>>R;
	// 	cout<<arr[R] - arr[L-1]<<"\n";
	// }
	cout<<arr[19463] - arr[1]<<"\n";
	return 0;
}