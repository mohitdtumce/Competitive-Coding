#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	cin>> str;
	int flag = false;
	for(int i = 0;i<str.length();i++)
	{
		if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
			cout<<"YES";
			flag = true;
			break;
		}
	}
	if(!flag)
		cout<<"NO";
	return 0;
}
