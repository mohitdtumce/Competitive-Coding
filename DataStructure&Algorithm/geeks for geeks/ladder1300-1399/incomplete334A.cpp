#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int ns = n*n;
	for(int i = 1;i <= n;i++)
	{
		cout<<i<<" "<<ns-i+1<<endl;
	}
	return 0;
}
