//Solve Rat in a Maze problem using backtracking
#include<iostream>
using namespace std;
#define N 4
void PrintSolution(int Sol[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<Sol[i][j]<<' ';
		}
		cout<<"\n";
	}
}

bool IsSafe(int maze[N][N],int x,int y){
	if(x >= 0 && x < N && y >=0 && y < N && maze[x][y]==1)
		return true;
	return false;
}
bool SolveMazeBackTracking(int maze[N][N],int x,int y,int sol[N][N]){
	if(x==N-1 && y== N-1){
		sol[x][y]=1;
		return true;
	}
	if(IsSafe(maze,x,y)==true){
		sol[x][y]=1;
		if (SolveMazeBackTracking(maze, x+1, y, sol) == true)
			return true;
		if (SolveMazeBackTracking(maze, x, y+1, sol) == true)
			return true;
		sol[x][y]=0;
	}
	return false;
}
void SolveMaze(int maze[N][N]){
	int sol[N][N] = {{0, 0, 0, 0} ,{0,0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0}};
	if(SolveMazeBackTracking(maze,0,0,sol)==true){
		cout<<"Solution Does Exist!!\n";
		PrintSolution(sol);
	}else{
		cout<<"Solution Doesn't Exist!!";
	} 
}



int main(){
 	int maze[N][N] = {{1, 0, 0, 0} ,{1, 1, 0, 0},{0, 1, 0, 0},{0, 1, 1, 1}};
 	SolveMaze(maze);
	return 0;
}
