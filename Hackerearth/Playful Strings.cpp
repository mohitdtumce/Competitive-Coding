#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void function(string str){
	int flag=0;
	int len=str.length();
	for(int i=0;i<str.length()-1;i++)
    {
        if(abs(str[i]-str[i+1])!=1 && abs(str[i]-str[i+1])!=25)
           {
               flag=1;
               break;
           }
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
int main(){
	int n;
	cin>>n;
	string str;
	while(n--){
		cin>>str;
		function(str);
	}
}