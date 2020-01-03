#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
void printPowerSet(char* set,int set_size){
	unsigned int pow_set_size=pow(2,set_size);
	int counter,j;
	for(counter=0;counter<pow_set_size;counter++){
		for(j=0;j<set_size;j++){
			if(counter&(1<<j)){
				cout<<set[j];
			}
		}
		cout<<endl;
	}
}
void printSubsequences(char* input) {
    // Write your code here
    int set_size=strlen(input);
	printPowerSet(input,set_size);
}

int main(){
	char input[]="abc";
	printSubsequences(input);
	return 0;
}
