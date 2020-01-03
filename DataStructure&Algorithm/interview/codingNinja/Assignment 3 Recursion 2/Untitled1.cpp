#include<iostream>
#include<map>
#include<cmath>
using namespace std;
long primeFactors(long n)
{
	std::map<long,int> mymap;
    while (n%2 == 0){
        //printf("%d ", 2);
		mymap[2]++;
        n = n/2;
    }
    for (long i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0){
			mymap[i]++;
            n = n/i;
        }
    }
    if (n > 2){
		mymap[n]++;
	}
	return mymap.size();
}
int main()
{	
	int N,Q;
	//input elements and queries count
	cin>>N>>Q;
	long arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	
	long x,y,k;
	for(long j=1;j<=Q;j++){
		cin>>x>>y>>k;
		long count=0;
		for(long l=x-1;l<=y-1;l++){
			if(primeFactors(l)>=k){
				count++;
			}
		}
		cout<<count<<endl;
	}
    return 0;
}
