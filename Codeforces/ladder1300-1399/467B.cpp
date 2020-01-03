#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, k;
	cin>>n>>m>>k;
	int player[m], fedor;
	for (int i = 0; i < m; ++i)
	{
		cin>>player[i];
	}
	cin>>fedor;

	int friends = 0;
	int res = 0;
	int setBits = 0;
	for (int i = 0; i < m; ++i)
	{
		res = fedor ^  player[i];
		setBits = __builtin_popcount (res);
		if(setBits <= k)
			friends++; 
	}
	cout<<friends;
	return 0;
}
