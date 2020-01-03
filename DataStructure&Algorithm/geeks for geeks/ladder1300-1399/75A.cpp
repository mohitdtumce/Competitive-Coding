#include <iostream>
#include <string>
using namespace std;

long long remove0(string str)
{
	string res;
	for (int i = 0; i < str.length(); ++i)
	{
		if(str[i] != '0')
		{
			res += str[i];
		}
	}
	return stoll(res);
}

int main(int argc, char const *argv[])
{
	string a,b;
	cin>>a>>b;
	string c = to_string(stoll(a)+stoll(b));
	c = to_string(remove0(c));
	string res = to_string(remove0(a) + remove0(b));
	if(c == res){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
