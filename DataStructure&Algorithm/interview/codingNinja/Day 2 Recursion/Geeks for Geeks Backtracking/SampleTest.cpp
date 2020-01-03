#include<iostream>
using namespace std ;
#define N 4
void PrintSolution(int sol[N][N]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cout<<sol[i][j]<<' ';
		}
		cout<<'\n';
	}
}
bool IsSafe(int maze[N][N],int x,int y){
	if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y]==1){
		return true;
	}
	return false;
}
bool SolveMazeBacktracking(int maze[N][N],int x,int y,int sol[N][N]){
	if(x == N-1 && y == N-1){
		sol[x][y]=1;
		return true;
	}
	if(IsSafe(maze,x,y)==true){
		sol[x][y]=1;
		if(SolveMazeBacktracking(maze,x+1,y,sol)==true){
			return true;
		}
		if(SolveMazeBacktracking(maze,x,y+1,sol)==true){
			return true;
		}
		sol[x][y]=0;
		return false;
	}
}

void SolveMaze(int maze[N][N]){
	int sol[N][N]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	if(SolveMazeBacktracking(maze,0,0,sol)==true){
		cout<<"Solution does exist!!\n";
		PrintSolution(sol);
	}else{
		cout<<"Solution doesn't exist!!\n";
	}
	
}
int main(){
	int maze[N][N] = {{1, 0, 0, 0} ,{1, 1, 0, 0},{0, 1, 0, 0},{0, 1, 1, 1}};
 	SolveMaze(maze);
	return 0;
}
