#include <iostream>
using namespace std;
#define N 4

void printSol(bool sol[N][N])
{
    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y < N; y++)
            cout<<sol[x][y]<<"\t";
        cout<<endl;
    }
}

bool isSafe(int maze[N][N],int x,int y)
{
	return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1);
}

bool ratMazeUtil(int maze[N][N], bool sol[N][N], int x, int y)
{
	if(x == N-1 && y == N-1)
	{
		sol[x][y] = 1;
		return true;
	}

	if(isSafe(maze,x,y) == true)
	{
		sol[x][y] = 1;
		if(ratMazeUtil(maze,sol,x+1,y) == true){
			return true;
		}
		if(ratMazeUtil(maze,sol,x,y+1) == true){
			return true;
		}
		sol[x][y] = 0;
		return false;
	}
	return false;
}

bool ratMaze(int maze[N][N])
{
	bool sol[N][N] = {{}};
	if(ratMazeUtil(maze,sol,0,0) == false)
	{
		return false;
	}else{
		printSol(sol);
		return true;
	}
}
int main(int argc, char const *argv[])
{
	int maze[N][N]  =  { {1, 0, 0, 0},
					     {1, 1, 0, 1},
					     {0, 1, 0, 0},
					     {1, 1, 1, 1}
					    };
    cout<<ratMaze(maze);
	return 0;
}
