#include <iostream>
using namespace std;
#define N 8
bool isSafe(int x,int y,int sol[N][N]){
	return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1);
}

printSol(int sol[N][N]){
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			cout<<sol[i][j]<<"\t";
		}
		cout<<endl;
	}
}

bool solveKTUtil(int x,int y,int movesi,int xMoves[8],int yMoves[8],int sol[N][N]){
	if(movesi == N*N){
		return true;
	}
	int next_x,next_y,k;
	for(k = 0;k < 8;k++){
		next_x = x + xMoves[k];
		next_y = y + yMoves[k];
		if(isSafe(next_x,next_y,sol)==true){
			sol[next_x][next_y] = movesi;
			if(solveKTUtil(next_x, next_y, movesi+1, xMoves, yMoves, sol) == true){
				return true;
			}else{
				sol[next_x][next_y] = -1;
			}
		}
	}
	return false;
}

bool solveKT(){
	int sol[N][N];
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			sol[i][j] = -1;
		}
	}
	int xMoves[8] = {2, 1, -1, -2, -2, -1, 1, 2};
	int yMoves[8] = {1, 2, 2, 1, -1, -2, -2, -1};
	sol[0][0] = 0;
	if(solveKTUtil(0,0,1,xMoves,yMoves,sol)==false){
		return false;
	}else{
		printSol(sol);
		return true;
	}
}

int main(){
	solveKT();
	return 0;
}