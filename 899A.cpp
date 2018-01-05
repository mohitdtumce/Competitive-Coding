#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int temp, count1 = 0, count2 = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		if(temp == 1)
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}
	if(count1 <= count2)
	{
		cout<<count1<<endl;
	}
	else
	{
		cout<<(count2 + (count1 - count2)/3);
	}
	return 0;
}
