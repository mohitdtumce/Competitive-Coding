#include<iostream>
int row,col,maximum;
//for even columns index 0-5
//for odd columns index 6-11
int a[]= {-1,-1,0,1,0,-1,-1,0,1,1,1,0};
int b[]= {0,-1,-1,0,1,1,0,-1,-1,0,1,1};
using namespace std;

int is_safe(int x,int y,int** visited)
{
	return (x>=0 && x<row && y>=0 && y<col && visited[x][y]==0);
}

void max_score(int** grid,int** visited,int i,int j,int length,int score,int face)
{
	visited[i][j]=1;
	score+=grid[i][j];
	length+=1;
	if(length==4)
	{
		visited[i][j]=0;
		if(score>maximum)
			maximum=score;
		return;
	}
	int m=6*(j%2);
	if(length==2)
	{
		int face1=(face+2)%6;
		int face2=(face+4)%6;
		int x1=i+a[m+face1];
		int y1=j+b[m+face1];
		int x2=i+a[m+face2];
		int y2=j+b[m+face2]; 
		if(is_safe(x1,y1,visited) && is_safe(x2,y2,visited) && grid[x1][y1]+grid[x2][y2]+score>maximum)
			maximum=score+grid[x1][y1]+grid[x2][y2];
	}
	for(int k=0;k<6;k++)
	{
		int x=i+a[m+k];
		int y=j+b[m+k];
		if(is_safe(x,y,visited))
			max_score(grid,visited,x,y,length,score,(k+3)%6);
	}
	//backtrack
	visited[i][j]=0;
}
int main()
{
	int T;
	cin>>T;
	for(int t=1;t<=T;t++)
	{
		cin>>row>>col;
		int** grid=new int*[row];
		int** visited=new int*[row];
		for(int i=0;i<row;i++)
		{
			grid[i]=new int[col];
			visited[i]=new int[col];
			for(int j=0;j<col;j++)
			{
				cin>>grid[i][j];
				visited[i][j]=0;
			}
		}
		maximum=0;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
				max_score(grid,visited,i,j,0,0,-1);
		}
		cout<<"#"<<t<<" "<<maximum<<endl;
	}
	return 0;
}
