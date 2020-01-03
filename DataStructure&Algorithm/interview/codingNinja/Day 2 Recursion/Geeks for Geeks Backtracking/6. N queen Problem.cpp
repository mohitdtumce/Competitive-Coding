//6. Problem of placing N chess queens on an NN chessboard so that no two queens attack each other
#include<iostream>
#include<stdio.h>
using namespace std;
#define N 8
bool IsSafe(int board[N][N],int row,int col){
	int i,j;
	
	for (i = 0; i < col; i++)
		if (board[row][i]==1)
			return false;

	for(i=row,j=col;i>=0,j>=0;i--,j--){
		if(board[i][j]==1){
			return false;
		}
	}
	for(i=row,j=col;i>=0,j>=0;i++,j--){
		if(board[i][j]==1){
			return false;
		}
	}
	return true;
}

bool SolveNQUtil(int board[N][N],int col){
	if(col>=N){
		return true;
	}
	for(int i=0;i<N;i++){
		if(IsSafe(board,i,col)){
			board[i][col]=1;
			if(SolveNQUtil(board,col+1)){
				return true;
			}
			board[i][col]=0;
		}
	}
	return false;
}

void Solution(){
	int board[N][N]={};
	if(SolveNQUtil(board,0)==true){
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
				printf(" %d ", board[i][j]);
			printf("\n");
		}
	}
	return;
}

int main(){
	Solution();
	return 0;
}
