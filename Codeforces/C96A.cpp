#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::string str;
	cin >> str;
	std::string str0(7, '0');
	std::string str1(7, '1');

	if (str.length() < 7)
	{
		std::cout << "NO";
	}
	else
	{
		std::size_t found0 = str.find(str0);
		std::size_t found1 = str.find(str1);
		if (found0 == std::string::npos && found1 == std::string::npos)
		{
			std::cout << "NO";
		}
		else
		{
			std::cout << "YES";
		}
	}

	return 0;
}