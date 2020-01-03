#include<iostream>
#include<cstring>
using namespace std;
int helper(char* input,int size,char output[][50]){
	if(size==0){
		output[0][0]=1;
		return 1;
	}
	int k=helper(input,size-1,output);
	for(int i=0;i<k;i++){
		for(int j=0;j<output[i][0];i++){
			output[k+i][j]=output[i][j];
		}
		output[k+i][0]+=1;
		int num=output[k+i][0];
		output[k+i][num]=input[size-1];
	}
	return 2*k;
}
int subSequences(char* input, char output[][50]) {
	int size=strlen(input);
	return helper(input,size,output);
}
int main(){
	char output[4][50];
	char arr[]="abc";
	int val=subSequences(arr,output);
	for(int i=1;i<4;i++){
		for(int j=0;j<=val;j++){
			cout<<output[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
