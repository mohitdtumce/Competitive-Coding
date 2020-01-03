#include<string.h>
#include<iostream>
#include<cmath>
using namespace std;
int stringToNumber(char input[]) {
    // Write your code here
    int l=strlen(input);
    if(l==0){
    	return 0;
	}
	int SmallOutput=(int)(input[0]-'0');
	SmallOutput=SmallOutput*pow(10,l-1);
	int result=stringToNumber(input+1);
	return (SmallOutput+result);
}

int main(){
	cout<<stringToNumber("3214");
}
