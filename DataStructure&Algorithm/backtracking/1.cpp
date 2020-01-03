#include <iostream>
#include <string>
using namespace std;

void swap(char* a,char* b){
	char temp = *a;
	*a = *b;
	*b = temp;
}
void permute(string str,int start,int end){
	if(start==end){
		cout<<str<<endl;
		return;
	}
	for(int i = start;i <= end; i++){
		swap(&str[i],&str[start]);
		permute(str,start+1,end);
		swap(&str[i],&str[start]);
	}

}
int main(){
	permute("ABC",0,2);
	return 0;
}