#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int n, m,temp;
		cin >> m >> n;
		vector<int> Hb;
    	vector<int> Hg;
    	for(int i =0; i< m; i++){
    		cin>>temp;
			Hb.push_back(temp);
    	}
		for(int j =0; j< n; j++){
			cin>>temp;
			Hg.push_back(temp);
		}

		sort(Hb.begin(),Hb.end());
		sort(Hg.begin(),Hg.end());
		int flag = 0;
		if(m > n)		{
			cout << "NO" << endl;
			flag = 1;
		}else{
			for(int i = 0; i< m; i++)
			{
				if(Hb[i] <= Hg[i])
				{
					cout << "NO" << endl;
					flag = 1;
					break;
				}
			}
			if(!flag)
				cout << "YES" << endl;
		}
	}
	return 0;
}