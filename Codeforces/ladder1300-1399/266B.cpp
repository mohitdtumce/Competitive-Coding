#include <iostream>
#include <string>
using namespace std;

string findOrder(string a, int n, int j)
{
	while(j--)
	{
		int i = 0;
		while(i < n-1)
		{
			if(a[i] == 'B' && a[i+1] == 'G')
			{
				a[i] = 'G';
				a[i+1] = 'B';
				i+=2;
			}else{
				i++;
			}
		}
	}
	return a;
} 
int main(int argc, char const *argv[])
{
	int n, j;
	cin>>n>>j;
	string str;
	cin>>str;
	cout<<findOrder(str,n,j);
	return 0;
}
