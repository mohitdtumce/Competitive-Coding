#include <iostream>
using namespace std;
#define N 9
#define unassigned 0

bool findUnassignedLocation(int grid[N][N],int& row,int& col){
	for(row = 0;row < N;row++){
		for(col = 0;col < N;col++){
			if(grid[row][col]==unassigned){
				return true;
			}
		}
	}
	return false;
}
bool usedInRow(int grid[N][N],int row,int num){
	for(int col = 0; col < N ;col++){
		if(grid[row][col] == num){
			return true;
		}
	}
	return false;
}

bool usedInCol(int grid[N][N],int col,int num){
	for(int row = 0; row < N ;row++){
		if(grid[row][col] == num){
			return true;
		}
	}
	return false;
}

bool usedInBox(int grid[N][N],int row,int col,int num){
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 3;j++){
			if(grid[row+i][col+j] == num){
				return true;
			}
		}
	}
	return false;
}

bool isSafe(int grid[N][N],int row,int col,int num){
	return ((!usedInRow(grid,row,num)) && 
		(!usedInCol(grid,col,num)) && 
		(!usedInBox(grid,row - row%3,col - col%3,num)));
}

bool sudokuSolver(int grid[N][N]){
	int row,col;
	if(!findUnassignedLocation(grid,row,col))
		return true;
	for(int num = 1;num <= 9; num++){
		if(isSafe(grid,row,col,num)){
			grid[row][col] = num;
			if(sudokuSolver(grid)==true){
				return true;
			}
			grid[row][col] = unassigned;
		}
	}
	return false;
}
printSol(int sol[N][N]){
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			cout<<sol[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int grid[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};
	
    if(sudokuSolver(grid)==true){
    	printSol(grid);
    }else{
    	cout<<"Bleh!!";
    }
	return 0;
}