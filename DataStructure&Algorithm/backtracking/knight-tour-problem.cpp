#include <iostream>
using namespace std;
#define N 8
void printSol(int sol[N][N])
{
    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y < N; y++)
            cout<<sol[x][y]<<"\t";
        cout<<endl;
    }
}
bool isSafe(int x, int y, int sol[N][N])
{
	return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == 0);
}

bool solveKTUtil(  int x,  int y,  int iMove,  int xMoves[],  int yMoves[],int sol[N][N])
{
	if(iMove == N*N)
	{
		return true;
	}

	for(int k = 0;k < 8; k++)
	{
		int nextx = x + xMoves[k];
		int nexty = y + yMoves[k];
		if(isSafe(nextx,nexty, sol))
		{
			sol[nextx][nexty] = iMove;
			if(solveKTUtil(nextx,nexty,iMove+1,xMoves,yMoves,sol)==true)
			{
				return true;
			}
			sol[nextx][nexty] = 0;
		}
	}
	return false;
}

bool solveKT()
{
	int sol[N][N] = {{}};
	int xMoves[] = {2, 1, -1, -2, -2, -1, 1, 2};
	int yMoves[] = {1, 2, 2, 1, -1, -2, -2, -1};
	sol[0][0] = 0;
	if(solveKTUtil(0,0,1,xMoves,yMoves,sol)==false)
	{
		return false;
	}else
	{
		printSol(sol);
		return true;
	}
}

int main(int argc, char   *argv[])
{
	solveKT();	
	return 0;
}
