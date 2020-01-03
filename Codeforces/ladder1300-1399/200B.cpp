#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, temp;
	cin>>n;
	double sum = 0;
	for(int i = 0;i < n;i++){
		cin>>temp;
		sum += ((double)(temp));
	}
	cout<<sum/n;
	return 0;
}
