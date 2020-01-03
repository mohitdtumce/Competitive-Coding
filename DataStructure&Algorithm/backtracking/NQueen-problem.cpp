#include <iostream>
using namespace std;
#define N 5

void printSol(bool sol[N][N])
{
    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y < N; y++)
            cout<<sol[x][y]<<"\t";
        cout<<endl;
    }
}

bool isSafe(int row,int col, bool board[N][N])
{
	int i,j;
	for (j = col; j >= 0; j--)
	{
		if(board[row][j]){
			return false;
		}
	}
	for(i = row,j = col; i >= 0 && j >= 0; i--,j--)
	{
		if(board[i][j]){
			return false;
		}
	}
	for(i = row,j = col; i < N && j >= 0; i++,j--)
	{
		if(board[i][j]){
			return false;
		}
	}
	return true;
}

bool solveNQUtil(bool board[N][N],int col)
{
	if(col >= N)
	{
		return true;
	}
	for(int i = 0;i < N; i++)
	{
		if(isSafe(i,col,board))
		{
			board[i][col] = true;
			if(solveNQUtil(board,col+1))
			{
				return true;
			}
			board[i][col] = false;
		}
	}
	return false;
}
bool solveNQ()
{
	bool board[N][N]={{}};
	if(solveNQUtil(board,0) == false)
	{
		return false;
	}
	printSol(board);
	return true;
}
int main(int argc, char const *argv[])
{
	solveNQ();
	return 0;
}
