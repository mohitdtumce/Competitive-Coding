#include<iostream>
int d,e,minimum,min_energy_index,max_time_index,min_e,min_t;
using namespace std;

struct node
{
    int min;
    int sec;
    int energy;
};

int min_energy(node* pace)
{
    int min=99999999;
    for(int i=0;i<5;i++)
    {
        if(pace[i].energy<min)
        {
            min=pace[i].energy;
        }
    }
    return min;
}

int min_time(node* pace)
{    
    int min=999999999,time;
    for(int i=0;i<5;i++)
    {
        time=60*pace[i].min+pace[i].sec;
        if(time<min)
        {
            min=time;
        }
    }
    return min;
}

void minimum_time(node* pace,int i,int dist,int energy,int time)
{
    if(energy>e || (energy+min_e*(d-dist))>e)
        return;
    if(time>=minimum || time+(min_t*(d-dist))>minimum)
        return;
    if(dist==d)
    {
        if(time<minimum)
            minimum=time;
        return;
    }
    if(i==5)
        return;
    int temp_time=60*pace[i].min+pace[i].sec;
    for(int j=0;j<=d-dist;j++)
    {
        minimum_time(pace,i+1,dist+j,(energy+(pace[i].energy)*j),time+(temp_time*j));
    }
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        cin>>e;
        cin>>d;
        node* pace=new node[5];
        for(int i=0;i<5;i++)
            cin>>pace[i].min>>pace[i].sec>>pace[i].energy;
        min_e=min_energy(pace);
        min_t=min_time(pace);
        minimum=999999999;
        minimum_time(pace,0,0,0,0);
        
        cout<<minimum/60<<" min "<<minimum%60<<" sec "<<endl;
    }
    return 0;
}
