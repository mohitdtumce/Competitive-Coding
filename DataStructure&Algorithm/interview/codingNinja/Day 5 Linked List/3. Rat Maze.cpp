/*
	Revision: Backtracking rat maze problem
*/
#include<iostream>
using namespace std;
#define N 4

int PrintMat(int sol[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<sol[i][j]<<' ';
		}
		cout<<endl;
	}
}

bool IsSafe(int maze[N][N],int row,int col){
	if( row>=0 &&row<N && col>=0 && col<N && (maze[row][col]!=0)){
		return true;
	}else{
		return false;
	}
}

bool SolveMazeUtil(int maze[N][N],int sol[N][N],int row,int col){
	if(row==N-1&&col==N-1){
		sol[row][col]=1;
		return true;
	}
	if(IsSafe(maze,row,col)==true){
		sol[row][col]=1;
		if(SolveMazeUtil(maze,sol,row+1,col)==true){
			return true;
		}
		if(SolveMazeUtil(maze,sol,row,col+1)==true){
			return true;
		}
		sol[row][col]=0;
		return false;
	}else{
		return false;
	}
}

void SolveMaze(int maze[N][N]){
	int sol[N][N]={};
	if(SolveMazeUtil(maze,sol,0,0)){
		cout<<"Yes\n";
		PrintMat(sol);
	}else{
		cout<<"No\n";
	}
}

int main(){
	int maze[N][N] = { {1, 0, 0, 0},{1, 1, 0, 1},{0, 1, 0, 0},{1, 1, 1, 1}};
	SolveMaze(maze);
	return 0;
}
