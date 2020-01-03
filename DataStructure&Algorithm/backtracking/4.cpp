#include <iostream>
using namespace std;
#define N 4
bool isSafe(int row,int col,int board[N][N]){
	int i,j;
	for(j = col;j >= 0;j--){
		if(board[row][j] == 1){
			return false;
		}
	}
	
	for(i = row,j = col;i < N && j >= 0; i++,j--){
		if(board[i][j] == 1){
			return false;
		}
	}

	for(i = row,j = col;i >= 0 && j >= 0; i--,j--){
		if(board[i][j] == 1){
			return false;
		}
	}

	return true;
}

printSol(int sol[N][N]){
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			cout<<sol[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool solveNQUtil(int col,int board[N][N]){
	if(col>=N){
		return true;
	}
	for(int i = 0;i < N;i++){
		if(isSafe(i,col,board)==true){
			board[i][col] = 1;
			if(solveNQUtil(col+1,board)==true){
				return true;
			}
			board[i][col] = 0;
		}
	}
	return false;
}

bool solveNQ(){
	int board[N][N]={};
	if(solveNQUtil(0,board) == false){
		return false;
	}
	printSol(board);
	return true;
}

int main(){
	solveNQ();
	return 0;
}