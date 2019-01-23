#include<iostream>
using namespace std;
#define INF 9999999
int min_cost;

struct toll_gate
{
    int men;
    int toll_cost;
};

void min_toll_cost(toll_gate* arr,int cost,int gate,int bp1,int bp2,int bp3,int n)
{
    if(cost>min_cost)
        return ;
    if(gate==n)
    {
        if(cost<min_cost)
            min_cost=cost;
        return;
    }
    //pay the toll
    min_toll_cost(arr,cost+arr[gate].toll_cost,gate+1,bp1,bp2,bp3,n);
    
    //battle and don't pay toll
    int count1=bp1,count2=bp2,count3=bp3; //required for backtracking
    if(bp1+bp2+bp3>=arr[gate].men)
    {
        int count=arr[gate].men;
        while(count)
        {
            if(bp1>0)
            {
                bp1--;
            }
            else if(bp2>0)
            {
                bp2--;
            }
            else if(bp3>0)
            {
                bp3--;
            }
            count--;
        }
        bp1=bp2;
        bp2=bp3;
        bp3=0;
        min_toll_cost(arr,cost,gate+1,bp1,bp2,bp3,n);
    }
    //backtrack
    bp1=count1;
    bp2=count2;
    bp3=count3;
    //hire all men of the toll paying double money
    bp3+=arr[gate].men;
    min_toll_cost(arr,cost+2*arr[gate].toll_cost,gate+1,bp1,bp2,bp3,n);
}
int main()
{
    int n,T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        toll_gate* arr=new toll_gate[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].men>>arr[i].toll_cost;
        }
        int bp1=0,bp2=0,bp=0;
        min_cost=9999999;
        min_toll_cost(arr,0,0,0,0,0,n);
        cout<<min_cost<<endl;
    }    
}
