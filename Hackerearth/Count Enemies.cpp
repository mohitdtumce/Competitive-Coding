#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int safe(string str,int start,int end){
	int count=0;
	for(int i=start+1;i<end;i++){
		if(str[i]=='O'){
			count++;
		}else{
			return 0;
		}
	}
	return count;
}
int function(string str,int len){
	vector<int> vec;
	for(int i=0;i<len;i++){
		if(str[i]=='*'){
			vec.push_back(i);
		}
	}
	int total=0;
	for(int i=0;i<vec.size()-1;i++){
		total+=safe(str,vec[i],vec[i+1]);
	}
	return total;
}

int main()
{
    int n;
    cin>>n;
    string str;
	while(n--){
    	cin>>str;
    	str='*'+str+'*';
		int len=str.length();
    	cout<<function(str,len)<<endl;
    }
    
    return 0;
}
