#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int temp, count0 = 0,count5  = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		if(temp == 5)
		{
			count5 ++;
		}else if(temp == 0){
			count0 ++;
		}
	}
	string res;
	if(count0 == 0){
		cout<<"-1";
	}else if(count5 < 9){
		cout<<"0";
	}else{
		count5 = (count5 - (count5 % 9));
		for(int i = 0;i < count5;i++)
		{
			res += '5';
		}
		for(int i = 0;i < count0;i++)
		{
			res += '0';
		}
	}
	cout<<res;
	return 0;
}
