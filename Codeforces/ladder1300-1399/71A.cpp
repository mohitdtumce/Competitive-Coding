#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string str, res;
	while(n--)
	{
		cin>>str;
		if(str.length() > 10)
		{
			res  = str[0] + to_string(str.length() - 2) + str[str.length()-1];
			cout<<res<<endl;
		}else{
			cout<<str<<endl;
		}
		
	}
	return 0;
}
