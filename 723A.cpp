#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	vector<int> vec;
	int temp;
	for(int i = 0; i < 3 ;i++){
		cin>>temp;
		vec.push_back(temp);
	}
	sort(vec.begin(),vec.end());
	cout<<(abs(vec[1]-vec[0])+abs(vec[2]-vec[1]));
	return 0;
}