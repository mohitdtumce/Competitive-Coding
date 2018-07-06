#include <iostream>
#include <string>
using namespace std;

void countString(string str){
	string string1="SUVO";
	string string2="SUVOJIT";
	int suvoCount=0;
	int suvojitCount=0;
	int len=str.length();
	int m=string1.length();
	int o=string2.length();
	for(int i=0;i<=len-m;i++){
		int j=0;
		while(j<m && str[i+j]==string1[j]){
			j++;
		}
		if(j==m){
			suvoCount++;
		}
	}
	for(int i=0;i<=len-o;i++){
		int j=0;
		while(j<o && str[i+j]==string2[j]){
			j++;
		}
		if(j==o){
			suvojitCount++;
		}
	}
	cout<<"SUVO = "<<suvoCount-suvojitCount<<", SUVOJIT = "<<suvojitCount<<endl;
}

int main()
{
	int T;
	cin>>T;
	string str;
	while(T--){
		cin>>str;
		countString(str);
	}	
    return 0;
}
