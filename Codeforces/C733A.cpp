#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	str = 'A'+str+'A';
	int count=1;
	int loc[101]={0};
	for(int i=0;i<str.length();i++){
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y'){
			loc[i]=count;
			count=1;
		}else{
			count++;
		}
	}
	int min=loc[0];
	for(int i=1;i<str.length();i++){
		if(loc[i]>min){
			min=loc[i];
		}
	}
	cout<<min;
	return 0;
}