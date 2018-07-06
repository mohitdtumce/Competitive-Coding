#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

struct Friend
{
	string name;
	int taxiCount, pizzaCount, girlCount;
};

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	Friend f[n];
	int maxTaxi = 0, maxPizza = 0, maxGirl= 0;
	for (int i = 0; i < n; ++i)
	{
		int s; string number;
		cin>>s>>f[i].name;
		f[i].taxiCount = 0; 
		f[i].pizzaCount = 0; 
		f[i].girlCount = 0;
		while(s--)
		{
			cin>>number;
			if(number[0] == number[1] && number[1] == number[3] && 
				number[3] == number[4] && number[4] == number[6] && number[6] == number[7])
			{
				f[i].taxiCount++;
			}
			else if(number[0] > number[1] && number[1] > number[3] && 
				number[3] > number[4] && number[4] > number[6] && number[6] > number[7])
			{
				f[i].pizzaCount++;
			}
			else
			{
				f[i].girlCount++;
			}
		}
		maxTaxi = max(maxTaxi, f[i].taxiCount);
		maxPizza = max(maxPizza, f[i].pizzaCount);
		maxGirl = max(maxGirl, f[i].girlCount);
	}
	string taxi, pizza , girl ;
	taxi += "If you want to call a taxi, you should call:";
	pizza += "If you want to order a pizza, you should call:";
	girl += "If you want to go to a cafe with a wonderful girl, you should call:";
	for (int i = 0; i < n; i ++)
	{
		if(f[i].taxiCount == maxTaxi)
		{
			taxi += (" " + f[i].name + ",");
		}
		if(f[i].pizzaCount == maxPizza)
		{
			pizza += (" " + f[i].name + ",");
		}
		if(f[i].girlCount == maxGirl)
		{
			girl += (" " + f[i].name + ",");
		}
	}
	taxi[taxi.size() - 1] = '.';
	pizza[pizza.size() - 1] = '.';
	girl[girl.size() - 1] = '.';
	cout<<taxi<<"\n"<<pizza<<"\n"<<girl;
	return 0;
}
