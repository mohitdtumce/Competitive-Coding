#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
    	int t;
    	cin>>t;
    	long temp;
    	vector<long> vec;
    	for(int i=0;i<t;i++){
    		cin>>temp;
    		vec.push_back(temp);
    	}
    	long max=vec[0];
    	int count=1;
    	for(int i=0;i<t;i++){
    		if(max>vec[i]){
    			max=vec[i];
    			count++;
    		}
    	}
    	cout<<count<<"\n";
    }
    return 0;
}
