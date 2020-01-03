#include <iostream>
#include <string>
using namespace std;

bool isVowel(char a)
{
	switch(a)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'y':
				 return true;
		default: return false;
	}
}
int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	int len = str.length();
	for (int i = 0; i < len; ++i)
	{
		str[i] = tolower(str[i]);
	}
	string res;
	for (int i = 0; i < len; ++i)
	{
		if(isVowel(str[i]) == false)
		{
			res += ".";
			res += str[i];
		}
	}
	cout<<res;
	return 0;
}
