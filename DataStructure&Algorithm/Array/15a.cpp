/*
Print the elements of an array in the decreasing frequency. If two 
numbers have same frequency then print the one which came first.
*/
#include <iostream>
using namespace std;
struct element{
	int val;
	int index;
	int freq;
};

bool comp(element A,element B){
	if(A.freq < B.freq){
		return true;
	}else if(A.freq > B.freq){
		return false;
	}else{
		if(A.index > B.index){
			return true;
		}else if(A.index < B.index){
			return false;
		}
	}
}

int main(){
	sort()
	return 0;
}