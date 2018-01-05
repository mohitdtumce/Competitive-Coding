#include <iostream>
#include <unordered_map>
using namespace std;
struct team
{	
	int x;
	int y;
	int home;
	int away;
};
int main()
{
	int n;
	cin>>n;
	team T[n];
	unordered_map<int,int> mymap;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>T[i].x;
		cin>>T[i].y;
		T[i].home = 0;
		T[i].away = 0;
		mymap[T[i].x]++;
	}
	
	for (int i = 0; i < n; ++i)
	{
		int temp = mymap[T[i].y];
		T[i].home = n - 1 + temp;
		T[i].away = n - 1 - temp;
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<T[i].home<<" "<<T[i].away<<endl;
	}
	return 0;
}