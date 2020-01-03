#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	long long n, temp;
	cin>>n;
	std::vector<long long> vec;
	for (long long i = 0; i < n; ++i)
	{
		cin>>temp;
		vec.push_back(temp);
	}
	long long minDist = INT_MAX, index = n;
	for (long long i = 0; i < n; ++i)
	{
		if(minDist > vec[i])
		{
			minDist = vec[i];
			index = i;
		}
	}
	int count = 0;
	for (long long i = 0; i < n; ++i)
	{
		if(minDist == vec[i])
		{
			count++;
		}
	}
	if(count>1)
	{
		cout<<"Still Rozdil";
	}else{
		cout<<(index+1);
	}
	return 0;
}
