#include <bits/stdc++.h>
using namespace std;

bool isSorted(int a[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		if(a[i] > a[i + 1])
			return 0;
	}
	return 1;
}

int main()
{   
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> a[i];
    }
    bool result = 1;
    int front = 0, end ;
    for (int i = 0; i < n - 1; ++i)
    {
    	if(a[i] > a[i + 1])
    	{
    		result = 0;
    		front = i;
    		break;
    	}
    }

    if(result)
    {
    	cout <<"yes\n1 1\n";
    	return 0;
    }
    
    end = front;
    while((end < n - 1) and (a[end] > a[end + 1]))
    {	
    	end++ ;
    }
    //cout << end <<"\n";
    reverse(a + front, a + end + 1);
    if(isSorted(a, n))
    	cout << "yes\n" << ++front << " " << ++end <<"\n";
    else
    	cout <<"no\n";

    return 0;
}