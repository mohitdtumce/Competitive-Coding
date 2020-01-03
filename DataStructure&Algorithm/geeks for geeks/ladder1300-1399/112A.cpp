#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string a;
	cin>>a;
	for (int i = 0; i < a.length(); ++i)
	{
		a[i] = tolower(a[i]);
	}
	
	string b;
	cin>>b;
	for (int i = 0; i < b.length(); ++i)
	{
		b[i] = tolower(b[i]);
	}

	if(a < b){
		cout<<"-1";
	}else if(a == b)
		cout<<"0";
	else
		cout<<"1";
	return 0;
}
