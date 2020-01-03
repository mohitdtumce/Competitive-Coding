#include <iostream>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, temp;
	cin>>n;
	list<int> neg;
	list<int> pos;
	list<int> zero;

	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		if(temp < 0){
			neg.push_back(temp);
		}
		else if(temp == 0)
		{
			zero.push_back(temp);
		}
		else
		{
			pos.push_back(temp);
		}
	}
	if(neg.size() % 2 == 0)
	{
		temp = neg.front();
		neg.pop_front();
		zero.push_back(temp);
	}
	if(pos.size() == 0)
	{
		temp = neg.front();
		neg.pop_front();
		pos.push_back(temp);
		
		temp = neg.front();
		neg.pop_front();
		pos.push_back(temp);
	}
	cout<<neg.size()<<" ";
	list<int>::iterator itr;
	for (itr = neg.begin(); itr != neg.end(); ++itr)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	cout<<pos.size()<<" ";
	for (itr = pos.begin(); itr != pos.end(); ++itr)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	cout<<zero.size()<<" ";
	for (itr = zero.begin(); itr != zero.end(); ++itr)
	{
		cout<<*itr<<" ";
	}
	return 0;
}
