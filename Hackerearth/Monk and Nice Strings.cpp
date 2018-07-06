#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	char ** str = new char*[n];
	for(int i=0;i<n;i++){
		str[i] = new char[11];
		cin>>str[i];
	}
	for(int i = 0; i < n; i++){
        int res = 0;
        for(int j = 0; j < i; j++){
            if(strcmp(str[j],str[i]) < 0){
                res += 1;
            }
        }
        cout<<res<<endl;
    }
	return 0;
}