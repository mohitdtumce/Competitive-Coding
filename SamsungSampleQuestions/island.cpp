#include<iostream>
using namespace std;

int is_safe(int** adj,int** visited,int i,int j,int n,int row,int col)
{
	if(i>=0 && i<row && j>=0 && j<col && visited[i][j]==0 && adj[i][j]==n)
		return 1;
	return 0;
}
void island(int** adj,int** visited,int i,int j,int n,int row,int col)
{


	visited[i][j]=1;
	int Row[]={-1,0,1,-1,1,-1,0,1};
	int Col[]={-1,-1,-1,0,0,1,1,1};
	
	for(int k=0;k<8;k++)
	{
		if(is_safe(adj,visited,i+Row[k],j+Col[k],n,row,col))
			island(adj,visited,i+Row[k],j+Col[k],n,row,col);
	}
	
}

int main()
{
	int row,col;
	cout<<"Enter no. of rows and columns : ";
	cin>>row>>col;
	int** adj=new int*[row];
	int** visited=new int*[row];
	for(int i=0;i<row;i++)
	{
		adj[i]=new int[col];
		visited[i]=new int[col];
	}
	int count=0;
	cout<<"Enter the graph : ";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>adj[i][j];
			visited[i][j]=0;
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(visited[i][j]==0)
			{
				island(adj,visited,i,j,adj[i][j],row,col);
				count++;
			}
		}
	}
	cout<<"\nThe no. of island is "<<count<<"\n";
	return 0;
}	
