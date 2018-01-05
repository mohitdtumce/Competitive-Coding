#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int R, C;
	cin>>R>>C;
	string str = "", temp;
	
	for (int i = 0; i < R; ++i)
	{
		cin>>temp;
		str += temp;
	}

	int count = 0, r = -1, c = 0;
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			if(str[i*R + j] == 'W')
			{
				if((j > 0 && str[i*R + j - 1] == 'P') || (j < C-1 && str[i*R + j + 1] == 'P')
					|| (i > 0 && str[(i-1)*R + j] == 'P') || (i < R-1 && str[(i+1)*R + j] == 'P'))
				{
					count++;
				}
			}
		}
	}
	cout<<count;
	return 0;
}
