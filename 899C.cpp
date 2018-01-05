#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define size 60001
int main(int argc, char const *argv[])
{
	long n;
	cin>>n;
	double sum;
	if(n%4 == 1 || n%4 == 2)
		cout<<"1\n";
	else
		cout<<"0\n";
	
	sum = (n*(n+1))/4;
	cout<<sum;
	// bool map[size] = {false};
	// int count = 0;
	// while(sum > 0)
	// {
	// 	if(sum > n)
	// 	{
	// 		map[n] = true;
	// 		sum -= n;
	// 		n--;
	// 		count++;
	// 	}
	// 	else
	// 	{
	// 		map[sum] = true;
	// 		sum = 0;
	// 		count++;
	// 	}
	// }
	// cout<<count<<" ";
	// for (int i = 0; i < size; ++i)
	// {
	// 	if(map[i])
	// 		cout<<i<<" ";
	// }
	return 0;
}

