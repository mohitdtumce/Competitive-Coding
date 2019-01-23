#include<iostream>
int arr[7][4];
int count,row,col;
int a[4]={0,-1,0,1};
int b[4]={1,0,-1,0};
using namespace std;
//storing pipe configurations 
void fill_array()
{
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(j==0 && (i==0 || i==2 || i==3 || i==4))
				arr[i][j]=1;
			else if(j==1 && (i==0 || i==1 || i==3 || i==6))
				arr[i][j]=1;
			else if(j==2 && (i==0 || i==2 || i==5 || i==6))
				arr[i][j]=1;
			else if(j==3 && (i==0 || i==1 || i==4 || i==5))
				arr[i][j]=1;
			else
				arr[i][j]=0;
		}
	}
		for(int i=0 ; i<7 ; i++){
		for( int j=0 ; j<4 ; j++)
			cout<<arr[i][j]<<" ";
			cout<<endl;
		}
}
struct queue
{
    int front;
    int rear;
   	int* arr;
};

queue* create_queue(int n)
{
    queue* q=new queue;
    q->front=q->rear=0;
    q->arr=new int[n];
    return q;
}

void enqueue(queue* q,int i)
{
    q->arr[q->rear++]=i;
}

int dequeue(queue* q)
{
    return q->arr[q->front++];
}
int empty_queue(queue* q)
{
    return (q->front==q->rear);
}
int is_connected(int** matrix,int x1,int y1,int x2,int y2,int i)
{
	int pipe1=matrix[x1][y1]-1;
	int pipe2=matrix[x2][y2]-1;
	if(pipe2==-1)
		return 0;
	if(i<2 && arr[pipe1][i] && arr[pipe2][2+i])
		return 1;
	if(i>=2 && arr[pipe1][i] && arr[pipe2][i-2])
		return 1;
	return 0;
}

int is_safe(int** matrix,int** visited,int x1,int y1,int x2,int y2,int i)
{
	return (x2>=0 && x2<row && y2>=0 && y2<col && visited[x2][y2]==0 && is_connected(matrix,x1,y1,x2,y2,i));
}

void connected_pipes(int** matrix,int** visited,int x,int y,int length)
{
	if(matrix[x][y]==0)
		return;
	queue* xq=create_queue(row*col);
	queue* yq=create_queue(row*col);
	queue* dist=create_queue(row*col);
	enqueue(xq,x);
	enqueue(yq,y);
	enqueue(dist,0);
	visited[x][y]=1;
	count++;
	int temp_x,temp_y,temp_dist;
	int next_x,next_y,next_dist;	
	while(!empty_queue(xq) && !empty_queue(yq))
	{
		temp_x=dequeue(xq);
		temp_y=dequeue(yq);
		temp_dist=dequeue(dist);
		if(temp_dist==length)
			continue;
		for(int i=0;i<4;i++)
		{
			next_x=temp_x+a[i];
			next_y=temp_y+b[i];
			next_dist=temp_dist+1;
			if(is_safe(matrix,visited,temp_x,temp_y,next_x,next_y,i))
			{
				enqueue(xq,next_x);
				enqueue(yq,next_y);
				enqueue(dist,next_dist);
				count++;
				visited[next_x][next_y]=1;
			}
		}
	}
}

int main()
{
	int T;
	cin>>T;
	fill_array();
	while(T--)
	{
		int length,x,y;
		cin>>row>>col;
		int** matrix=new int*[row];
		int** visited=new int*[row];
		for(int i=0;i<row;i++)
		{
			matrix[i]=new int[col];
			visited[i]=new int[col];
		}
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				visited[i][j]=0;
				cin>>matrix[i][j];
			}
		}
		cin>>x>>y>>length;
		count=0;
		connected_pipes(matrix,visited,x,y,length);
		//count=0;
		cout<<count<<endl;
	}
	return 0;
}		
