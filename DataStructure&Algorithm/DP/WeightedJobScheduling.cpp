#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

struct job{
	int start;
	int finish;
	int profit;
};

bool comp(struct job a,struct job b){
	return a.finish < b.finish;
}

void maxProfit(struct job J[],int n){
	sort(J,J+6,comp);
	int * tp =  new int[n];
	for(int i = 0;i < n;i++){
		tp[i] = J[i].profit;
	}
	int maxVal = tp[0];
	for(int i = 1; i < n ; i++){
		for(int j = 0; j < i;j++){
			if(tp[j]+J[i].profit > tp[i] && J[j].finish <= J[i].start){
				tp[i] = tp[j]+J[i].profit;
				if(maxVal < tp[i]){
					maxVal = tp[i];
				}
			}
		}
	}
	for(int i =0;i < n;i++){
		cout<< tp[i]<<" ";
	}
	cout<<"\n"<<maxVal;
}

int main(){
	job J[] = {{1, 3, 5}, {2, 5, 6}, {4, 6, 5}, {6, 7, 4}, {5, 8, 11}, {7, 9, 2}};
	maxProfit(J,6);
	return 0;
}