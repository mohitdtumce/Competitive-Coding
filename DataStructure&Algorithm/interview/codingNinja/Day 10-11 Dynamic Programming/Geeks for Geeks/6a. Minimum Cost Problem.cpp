#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
#define R 3
#define C 3

//Naive Approach
int min(int x,int y,int z){
	return min(x,min(y,z));
}
int MCP(int cost[R][C],int m,int n){
	if(m<0||n<0){
		return INT_MAX;
	}
	if(m==0 && n==0){
		return cost[m][n];
	}else{
		return cost[m][n]+min(MCP(cost,m-1,n),MCP(cost,m-1,n-1),MCP(cost,m,n-1));
	}
}

int main(){
	int cost[R][C] = {{1, 2, 3},{4, 8, 2},{1, 5, 3}};
	cout<<MCP(cost,2,2);
	return 0;
}