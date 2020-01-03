#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int r, c;
	cin>>r>>c;
	int R[r] = {};
	int C[c] = {};
	string str;
	for (int i = 0; i < r; ++i)
	{
		cin>>str;
		for (int j = 0;j < c; j++)
			if(str[j] == 'S'){
				R[i]++;
				C[j]++;
			}
	}
	int count = 0, temp1 = 0,temp2 = 0;
	for (int i = 0; i < r; ++i)
	{
		if(R[i] == 0)
		{
			count += c;
			temp1++;
		}
	}
	for( int j = 0;j < c; j++)
	{
		if(C[j] == 0)
		{
			count += r;
			temp2++;
		}
	}
	cout<<(count - temp1*temp2);
	return 0;
}
