#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);
	int p, q, l, r, temp1, temp2, i, j, k;
	cin>>p>>q>>l>>r;
	vector<pair<int, int>> z;
	vector<pair<int, int>> x;
	for (i = 0; i < p; ++i)
	{
		cin>>temp1>>temp2;
		z.push_back(make_pair(temp1,temp2));
	}
	for (j = 0; j < q; ++j)
	{
		cin>>temp1>>temp2;
		x.push_back(make_pair(temp1,temp2));
	}

	int count = 0;
	k = l;
	while(k <= r)
	{
		i = 0;
		j = 0;
		while(i < p && j < q)
		{
			if(x[j].second + k < z[i].first)
			{
				j++;
			}
			else if(x[j].first + k > z[i].second)
			{
				i++;
			}
			else
			{
				count ++;
				break;
			}
		}
		k ++;
	}
	cout<<count;
	return 0;
}
