#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>> n;
	int temp;
	cin>>temp;
	int worst,best;
	worst = best = temp;
	int count = 0;
	for (int i = 1; i < n; ++i)
	{
		cin>>temp;
		if(temp > best){
			count++;
			best = temp;
		}
		else if(temp < worst){
			count++;
			worst = temp;
		}
	}
	cout<<count;
	return 0;
}
