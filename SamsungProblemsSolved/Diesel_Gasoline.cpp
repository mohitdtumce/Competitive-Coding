#include <iostream>
int min_step;
using namespace std;

int next_move(int pos,int fuel_type)
{
    if(fuel_type==1)
        return pos+1;
    else
        return pos-1;
}
void min_move(int* arr,int pos,int fuel_type,int fuel,int count,int n,int step,int* visited)
{
    if(step>min_step)
        return;
    step+=1;
    if(pos==0)
        min_move(arr,1,1,2,count,n,step,visited);
    else if(pos==n+1)
        min_move(arr,n,2,2,count,n,step,visited);
    else if(arr[pos]!=fuel_type || fuel==0 || visited[pos]==1)
    {
        int next=next_move(pos,fuel_type);
        min_move(arr,next,fuel_type,fuel,count,n,step,visited);
    }
    //cout<<"here"<<endl;
    else if(arr[pos]==fuel_type)
    {
         int next=next_move(pos,fuel_type);
        //don't fuel,move in forward direction
        min_move(arr,next,fuel_type,fuel,count,n,step,visited);
        //fuel it
        fuel--;
        count++;
        visited[pos]=1;
        if(count==n)
        {
            if(step<min_step)
                min_step=step;
            return;
        }
        //to go to the same direction
        //int next=next_move(pos,fuel_type);
        min_move(arr,next,fuel_type,fuel,count,n,step,visited);
        //to return back
        fuel_type=(fuel_type==1)?2:1;
        next= next_move(pos,fuel_type);
        min_move(arr,next,fuel_type,0,count,n,step,visited);
        //backtrack
        visited[pos]=0;
    
        
    }
}
int main()
{
    int n,T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int* arr= new int[n+2];
        arr[0]=10;
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        arr[n+1]=20;
        int* visited=new int[n+2];
        for(int i=0;i<n+2;i++)
        {
            visited[i]=0;
            //cout<<arr[i]<<" ";
        }
        min_step=9999999;    
        min_move(arr,1,1,2,0,n,0,visited);
        cout<<min_step<<endl;
    }
    return 0;
}
