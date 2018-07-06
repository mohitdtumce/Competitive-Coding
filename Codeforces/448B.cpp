#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s, t;
	cin>>s>>t;
	int lens = s.size();
	int lent = t.size();
	int hashs[26] = {};
	int hasht[26] = {};
	if(lens < lent)
	{
		cout<<"need tree";
	}
	else if(lens == lent)
	{
		for (int i = 0; i < lens; ++i)
		{
			hashs[s[i] - 'a']++;
			hasht[t[i] - 'a']++;
		}
		
		bool isSame = true;
		for (int k = 0; k < 26; ++k)
		{
			if(hashs[k] != hasht[k])
			{
				isSame = false;
				break;
			}
		}
		
		if(isSame)
		{
			cout<<"array";
		}
		else
		{
			cout<<"need tree";
		}
	}
	else
	{
		for (int i = 0; i < lens; ++i)
		{
			hashs[s[i] - 'a']++;
		}
		for (int j = 0; j < lent; ++j)
		{
			hasht[t[j] - 'a']++;
		}
		
		bool isPossible = true;
		for (int k = 0; k < 26; ++k)
		{
			if(hashs[k] < hasht[k])
			{
				isPossible = false;
				break;
			}
		}
		
		if(isPossible)
		{
			int i, j = 0;
			for (i = 0; i < lens && j < lent; ++i)
			{
				if(s[i] == t[j])
					j++;
			}
			
			if(j == lent)
			{
				cout<<"automaton";
			}
			else
			{
				cout<<"both";
			}
		}
		else
		{
			cout<<"need tree";
		}
	}
	return 0;
}
