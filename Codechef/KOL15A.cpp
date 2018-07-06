	#include <iostream>
	#include <string>
	using namespace std;

	int main()
	{
		int T, count;
		cin>>T;
		string str;
		while (T--) {
			cin>>str;
			count = 0;
			for (int i = 0; i < str.size(); ++i)
			{
				if (str[i] >= '0' && str[i] <= '9') {
					count += int(str[i] - '0');
				}
			}
			cout<<count<<"\n";
		}
	}