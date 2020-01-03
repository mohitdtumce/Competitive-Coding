#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int EditDistanceHelper(char* a,char* b,int m,int n){
	if(m==0) return n;
	if(n==0) return m;
	
	if(a[m]==b[n]){
		return EditDistanceHelper(a,b,m-1,n-1);
	}else{
		return 1+min(EditDistanceHelper(a,b,m,n-1),min(EditDistanceHelper(a,b,m-1,n),EditDistanceHelper(a,b,m-1,n-1)));
	}
}
int EditDistance(char *a,char* b){
	return EditDistanceHelper(a,b,strlen(a),strlen(b));
}

int main(){
	
	char str1[] = "sunday";
	char str2[] = "saturday";
	cout<<EditDistance(str1,str2);
	return 0;
}
