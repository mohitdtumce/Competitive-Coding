#include <iostream>
#include <string>
using namespace std;

int countVowel(string str){
	int count=0;
	for(int i=0;i<str.length();i++){
		switch(str[i]){
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':count++;
		}
	}
	return count;
}
int main()
{
    int T;
	cin>>T;
	string str;
	while(T--){
		cin>>str;
		cout<<countVowel(str)<<endl;
	}
    return 0;
}
