#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string a,b;
	cin>>a>>b;
	if(a.length() != b.length()){
		cout<<"NO";
		return 0;
	}
	int i = 0;
	for (; i < a.length(); ++i)
	{
		if(a[i] != b[a.length()-1-i]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
