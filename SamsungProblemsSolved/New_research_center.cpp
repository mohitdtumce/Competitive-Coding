#include<iostream>
int shortest_longest_path;
int a[]={0,0,1,-1};
int b[]={1,-1,0,0};

using namespace std;

struct node
{
    int x;
    int y;
};

/*struct ele
{
    int x;
    int y;
    int dist;
};*/

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
int is_safe(int** grid,int** visited,int x,int y,int n)
{
    return (x>=0 && x<n && y>=0 && y<n && visited[x][y]==-1 && grid[x][y]==1);
}
int min_dist(int** grid,int** visited,int i,int j,int u,int v,int n)
{
    queue* x=create_queue(n);
    queue* y=create_queue(n);
    queue* dist=create_queue(n);
    if(i==u && j==v)
        return 0;
    enqueue(x,i);
    enqueue(y,j);
    enqueue(dist,0);
    visited[i][j]=1;
    int temp_x,temp_y,temp_dist;
    while(!empty_queue(x) && !empty_queue(y) && !empty_queue(dist))
    {
        temp_x=dequeue(x);
        temp_y=dequeue(y);
        temp_dist=dequeue(dist);
        //cout<<"before"<<endl;
        for(int k=0;k<4;k++)
        {
            if(is_safe(grid,visited,temp_x+a[k],temp_y+b[k],n))
            {
                if(temp_x+a[k]==u && temp_y+b[k]==v)
                    return temp_dist+1;
                enqueue(x,temp_x+a[k]);
                enqueue(y,temp_y+b[k]);
                enqueue(dist,temp_dist+1);
                //cout<<"enqueueing "<<temp_x+a[k]<<" "<<temp_y+b[k]<<endl;
                visited[temp_x+a[k]][temp_y+b[k]]=1;
            }
            
        }
    }
    return 99999999;
}
int main()
{
    int n,T,c,x1,y1;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int** grid=new int*[n];
        int** visited=new int*[n];
        for(int i=0;i<n;i++)
        {
            grid[i]=new int[n];
            visited[i]=new int[n];
        }
        cin>>c;
        node* rare=new node[c];
        for(int i=0;i<c;i++)
        {
            cin>>x1>>y1;
            rare[i].x=x1-1;
            rare[i].y=y1-1;
        }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                visited[i][j]=-1;
                cin>>grid[i][j];
            }    
        }
        shortest_longest_path=9999999;
        int longest_path,dist;
        //cout<<"here"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
            	//cout<<"herej"<<endl;
                if(grid[i][j]==1)
                {
                    for(int p=0;p<n;p++)
                    {
                        for(int q=0;q<n;q++)
                            visited[p][q]=-1;
                    }
                    longest_path=-1;
                    for(int k=0;k<c;k++)
                    {
                    	//cout<<"herek"<<endl;
                    	//cout<<rare[k].x<<rare[k].y;
                        dist=min_dist(grid,visited,i,j,rare[k].x,rare[k].y,n);
                        //cout<<"herenextk"<<endl;
                        if(dist>longest_path)
                            longest_path=dist;
                        if(longest_path>shortest_longest_path)
                        	break;
                    }
                    if(longest_path<shortest_longest_path)
                        shortest_longest_path=longest_path;
                }
            }
        }
        cout<<shortest_longest_path<<endl;
    }
}
