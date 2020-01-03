#include <iostream>
using namespace std;


long long findTime(int n, int task[], int m)
{
	int i = 0;
	long long dist = 0;
	int loc = 1;
	while(i < m)
	{
		if(task[i] > loc)
		{
			dist += (task[i] - loc);
			loc = task[i];
		}
		else if(task[i] < loc)
		{
			dist += (n - (loc - task[i]));
			loc = task[i];
		}
		i++;
	}
	return dist;
}
int main(int argc, char const *argv[])
{
	int n, m;
	cin>>n>>m;
	int task[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>task[i];
	}
	cout<<findTime(n, task, m);
	return 0;
}
