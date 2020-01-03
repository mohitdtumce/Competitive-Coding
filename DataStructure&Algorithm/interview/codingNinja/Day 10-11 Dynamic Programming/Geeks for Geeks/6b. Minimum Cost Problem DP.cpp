#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
#define R 3
#define C 3

//Dynamic Programming Approach
int min(int x,int y,int z){
	return min(x,min(y,z));
}
int MCP(int cost[R][C],int m,int n){
	int** solution=new int*[R+1];
	for(int i=0;i<=R;i++){
		solution[i]= new int[C+1];
	}
	solution[0][0]=cost[0][0];
	for(int i=1;i<=R;i++){
		solution[i][0]=cost[i][0]+solution[i-1][0];
	}
	for(int j=1;j<=C;j++){
		solution[0][j]=cost[0][j]+solution[0][j-1];
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			solution[i][j]=cost[i][j]+min(solution[i-1][j],solution[i-1][j-1],solution[i][j-1]);
		}
	}
	return solution[m][n];
}

int main(){
	int cost[R][C] = {{1, 2, 3},{4, 8, 2},{1, 5, 3}};
	cout<<MCP(cost,2,2);
	return 0;
}