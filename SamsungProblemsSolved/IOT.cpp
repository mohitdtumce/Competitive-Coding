#include<iostream>
int D, E, F, N,d,e,maximum;
using namespace std;

int cal_profit(int cpu, int memory) {
	return (cpu*d+memory*e);
}
void max_profit(int* cpu, int* mem, int* board, int* price,int c,int m,int b, int i, int model,int count, int profit) {
    int p;
	if (model==3 || i==N)  {
	    p=cal_profit(D-c,E-m);
	    //cout<<profit<<" "<<p<<endl;
		if (profit+p>maximum)
			maximum = profit+p;
		return;
	}
	//consider profit in each step(for 1,2,3 no. of models)
	if (count>0)  {
	    p=cal_profit(D-c,E-m);
	    //cout<<"here "<<profit<<" "<<p<<endl;
		if (profit+p>maximum)
			maximum = profit+p;
	}
//	if (c+cpu[i]>D || m+mem[i]>E || b+board[i]>F)
//		return;
	//int temp = (price[i]-cpu[i]*d-mem[i]*e);
	int temp=price[i];
/*	for(int k=0;k<=3-model;k++)
	{
		if (c+cpu[i]*k<=D && m+mem[i]*k<=E && b+board[i]*k<=F)
		max_profit(cpu,mem,board,price,c+cpu[i]*k,m+mem[i]*k,b+board[i]*k,i+1,model+k,profit+temp*k);
	}*/
	int k=0;
	while(c+cpu[i]*k<=D && m+mem[i]*k<=E && b+board[i]*k<=F)
	{
		if(k==0)
		max_profit(cpu,mem,board,price,c+cpu[i]*k,m+mem[i]*k,b+board[i]*k,i+1,model,count+k,profit+temp*k);
		else
		max_profit(cpu,mem,board,price,c+cpu[i]*k,m+mem[i]*k,b+board[i]*k,i+1,model+1,count+k,profit+temp*k);
		k++;
	}
	/*
	//include the current model
	max_profit(cpu, mem, board, price, c+cpu[i], m+mem[i], b+board[i], i+1, model+1,profit+temp);
	//exclude the current model
	max_profit(cpu, mem, board, price, c, m, b, i+1, model, profit);*/
}
int main() {
	int T;
	cin>>T;
	while (T--)  {
		cin>>D>>E>>F>>d>>e;
		cin>>N;
		int* cpu = new int[N];
		int* mem = new int[N];
		int* board = new int[N];
		int* price = new int[N];
		for (int i = 0; i<N; i++)
			cin>>cpu[i]>>mem[i]>>board[i]>>price[i];
		//int profit_0 = profit(D,E)
		maximum = cal_profit(D,E);
		max_profit(cpu, mem, board, price,0,0,0,0,0,0,0);
		cout<<maximum<<endl;
	}
	return 0;
}
