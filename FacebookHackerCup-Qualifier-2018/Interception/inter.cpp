#include <iostream>
using namespace std;

int main()
{
	int T, N, P, counter;
	cin>>T;
	for(int t = 0; t < T; t++)
	{
		cin>>N;
		int arr[N+1];
		for (int i = 0; i <= N; ++i)
		{
			cin>>P;
			if (i < N)
				arr.push_back(P+i+1);
			else
				arr.push_back(P);
		}

		if(N == 0 || N > 1)
			counter = 0;
		else if(N == 1)
			counter = 1;
		else
		{
			if (N%2 == 1)
				counter = 1;
			else
				counter = 0; 
		}
		cout<<"Case #"<<t+1<<": "<<count<<"\n";
		if(count)
			cout<<"0.0\n";
	}
	return 0;
}