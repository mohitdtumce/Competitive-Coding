#include <iostream>
#include <algorithm>
using namespace std;

struct dragon{
	int strength;
	int bonus;
};

bool comp(struct dragon a, struct dragon b)
{
	return (a.strength < b.strength);
}

int main(int argc, char const *argv[])
{
	int s,n;
	cin>>s>>n;
	struct dragon d[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>d[i].strength;
		cin>>d[i].bonus;
	}
	sort(d,d+n,comp);
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<d[i].strength<<" "<<d[i].bonus<<endl;
	// }
	int i = 0;
	// cout<<"---------------------\n";
	while(i < n && s <= d[n-1].strength)
	{
		if(s> d[i].strength)
			s += d[i].bonus;
		else
			break;
		i++;
	}
	if(s > d[n-1].strength)
	{
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
