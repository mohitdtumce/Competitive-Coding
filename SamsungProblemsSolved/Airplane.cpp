#include<iostream>
int a[]={-1,-1,-1};
int b[]={-1,0,1};
int maximum;
using namespace std;

int is_safe(int** grid,int row,int col)
{
	return (col>=0 && col<5);
}

int** detonate(int** grid,int row,int n)
{
	int** new_grid=new int*[n+1];
	for(int i=0;i<n+1;i++)
		new_grid[i]=new int[5];
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i>=row || i<row-5 || grid[i][j]==0 || grid[i][j]==1)
				new_grid[i][j]=grid[i][j];
			else
				new_grid[i][j]=0;
		}
	}
	return new_grid;
}

void max_score(int** grid,int row,int col,int score,int n,int detonate_option)
{
	int flag=0;
	if(grid[row][col]==1)
		score+=1;
	else if(grid[row][col]==2 && score==0)
	{
		if(score>maximum)
			maximum=score;
		return;
	}
	else if(grid[row][col]==2)
		score-=1;
	if(row==0)
	{
		if(score>maximum)
			maximum=score;
		return;
	}
	for(int i=0;i<3;i++)
	{
		if(is_safe(grid,row+a[i],col+b[i]))
		{
			max_score(grid,row+a[i],col+b[i],score,n,1);
			flag=1;
		}
	}
	if(flag==0)
	{
		if(score>maximum)
			maximum=score;
		return;
	}
	flag=0;
	if(detonate_option==1)
	{
		int** new_grid=detonate(grid,row,n);
		for(int i=0;i<3;i++)
		{
			if(is_safe(new_grid,row+a[i],col+b[i]))
			{
				max_score(new_grid,row+a[i],col+b[i],score,n,0);
				flag=1;
			}
		}
		if(flag==0)
		{
			if(score>maximum)
				maximum=score;
			return;
		}
	}
}

int main()
{
	int T,n;
	cin>>T;
	while(T--)
	{
		cin>>n;
		int** grid=new int*[n+1];
		for(int i=0;i<n+1;i++)
			grid[i]=new int[5];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<5;j++)
				cin>>grid[i][j];
		}
		for(int i=0;i<5;i++)
		{
				grid[n][i]=-1;
		}
		maximum=-999;
		max_score(grid,n,2,0,n,1);
		if(maximum>0)
			cout<<maximum<<endl;
		else
			cout<<"-1"<<endl;
	}
	return 0;
}
