#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define N 4

void PrintMat(int sol[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<sol[i][j]<<' ';
		}
		cout<<endl;
	}
}

bool IsSafe(int maze[N][N],int row,int col){
	return (row >=0 && row <N && col >=0 && col <N && (maze[row][col]==1));
}

bool RatMazeUtil(int maze[N][N],int row,int col,int sol[N][N]){
	if(row==N-1 && col==N-1){
		sol[row][col]=1;
		return true;
	}
	if(IsSafe(maze,row,col)==true){
		sol[row][col]=1;
		if(RatMazeUtil(maze,row+1,col,sol)==true){
			return true;
		}
		if(RatMazeUtil(maze,row,col+1,sol)==true){
			return true;
		}
	    sol[row][col]=0; // Backtracking
		return false;
	}
	return false;
}
void RatMaze(int maze[N][N]){
	int sol[N][N]={};
	if(!RatMazeUtil(maze,0,0,sol)){
		cout<<"No";
	}else{
		PrintMat(sol);
	}
}

int main(){
	int maze[N][N] = { {1, 0, 0, 0},{1, 1, 0, 1},{0, 1, 0, 0},{1, 1, 1, 1}};
	RatMaze(maze);
	return 0;
}
