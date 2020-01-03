/*
	Placing N Queens on an NxN board
*/
#include<iostream>
using namespace std;
#define N 8

void PrintMat(int Sol[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<Sol[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool IsSafe(int Sol[N][N],int row,int col){
	int i,j;
	for(i=0;i<col;i++){
		if(Sol[row][i]){
			return false;
		}
	}
	
	for(i=row,j=col;i>=0 && j>=0;i--,j--){
		if(Sol[i][j]){
			return false;
		}
	}
	
	for(i=row,j=col;i<=N-1 && j>=0;i++,j--){
		if(Sol[i][j]){
			return false;
		}
	}
	
	return true;
}

bool NQUtil(int Sol[N][N],int col){
	if(col>=N){
		return true;
	}
	for(int i=0;i<N;i++){
		if(IsSafe(Sol,i,col)==true){
			Sol[i][col]=1;
			if(NQUtil(Sol,col+1)==true){
				return true;
			}
			Sol[i][col]=0;
		}
	}
	return false;
}

void NQ(){
	int Sol[N][N]={};
	if(NQUtil(Sol,0)==true){
		cout<<"Yes\n";
		PrintMat(Sol);
	}else{
		cout<<"No\n";
	}
}

int main(){
	NQ();
	return 0;
}
