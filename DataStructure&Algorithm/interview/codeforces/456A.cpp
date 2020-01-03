#include<bits/stdc++.h>
using namespace std;
struct dragon
{
    int x;
    int y;
};

bool cmp(const dragon& left, const dragon& right)
{
    return left.x < right.x;
}

int main(){
  	int n;
  	cin>> n;
  	dragon d[100000];
  	for(int i = 0;i < n; ++i)
  	{
	   cin >> d[i].x >> d[i].y;
  	}
    sort(d, d + n, cmp);
	
	for(int i=0;i<n-1;i++){
		if(d[i].y>d[i+1].y){
			std::cout<<"Happy Alex";
			return 0;
		}
	}
	std::cout<<"Poor Alex";
	return 0;
}