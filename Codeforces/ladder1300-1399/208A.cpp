#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	string res;
	int i = 0;
	bool flag = false;
	int len = str.length();
	while(i < len)
	{
		if(i+2 < len && str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
		{
			if(flag)
			{
				res += " ";
			}
			i+=3;
		}	
		else{
			res += str[i];
			i+=1;
			flag  = true;
		}
	}
	std::cout<<res;
	return 0;
}
