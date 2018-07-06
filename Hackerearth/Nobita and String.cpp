#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <stdio.h>
using namespace std;

 int main(){
	int n;
	string str;
	cin>>n;
	getchar();
	while(n--){
		getline(std::cin, str);
		reverse(str.begin(),str.end());
		string::iterator itr,itr1;
		for(itr=str.begin();itr!=str.end();itr++){
			itr1=itr;
			while(itr!=str.end() && *itr!=' ')
                itr++;
            reverse(itr1,itr);
            if(*itr == '\n' || itr ==str.end())
               break;
		}
		cout<<str<<endl;
	}
	return 0;
}