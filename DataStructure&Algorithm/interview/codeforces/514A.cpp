#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	std::string str;
	std::cin>>str;
	vector<int> vec;
	int i,count =0;
	for(i=0;i<str.length();i++){
		vec.push_back(str[i]-48);
	}
	
	for(i=0;i<vec.size();i++){
		if(vec[i]==9){
			count++;
		}
	}
	if(count ==  vec.size()){
		if(vec.size()==1){
			std::cout<<str;
		}else{
			for(i=1;i<vec.size();i++){
			
			if(vec[i]>=5){
				if(i==0 && vec[i]==9){
					vec[i]=vec[i];
				}else{
					vec[i]= 9-vec[i];
				}
				
			}
		}
		for(i=0;i<vec.size();i++){
			cout<<vec[i];
		}		
		}
		
	}else{
		for(i=0;i<vec.size();i++){
			
			if(vec[i]>=5){
				if(i==0 && vec[i]==9){
					vec[i]=vec[i];
				}else{
					vec[i]= 9-vec[i];
				}
				
			}
		}
		for(i=0;i<vec.size();i++){
			cout<<vec[i];
		}	
	}
	
	return 0;
	
}