#include <iostream>
#include <string>
using namespace std;

string findOrder(string str,int n,int k)
{
	int i,j = 0;
	while(j < k)
	{
		i = 0;
		while(i < n-1)
		{
			if(str[i] == 'B' && str[i+1] == 'G')
			{
				str[i] = 'G';
				str[i+1] = 'B';
				i+=2;
			}else{
				i++;
			}
		}
		j++;
	}
	return str;
}
int main(int argc, char const *argv[])
{
	int n, t;
	cin>>n>>t;
	string str;
	cin>>str;
	cout<<findOrder(str, n, t);
	return 0;
}
