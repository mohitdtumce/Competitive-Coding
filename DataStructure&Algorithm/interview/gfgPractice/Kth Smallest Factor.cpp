#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;

int main() 
{
	ll t,n,i,j,k,l,m;
	scanf ("%lld",&t);
	while (t--)
	{
	    scanf ("%lld %lld",&n,&k);
	    vll V;
	    for (i=1;i<=sqrt(n);++i)
	    {
	        if (n%i==0)
	        {
	            V.push_back(i);
	            if ((n/i)!=i)
	                V.push_back(n/i);
	        }
	    }
	    sort(V.begin(),V.end());
	    if (k>V.size())
	        puts ("-1");
	    else
	        printf ("%lld\n",V[k-1]);
	}
	return 0;
}