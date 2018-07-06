#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	// frequency array
	int n;
	cin>>n;
	int freq[n];
	int strokes[n];
	for(int i=0;i<n;i++){
		cin>>freq[i];
		strokes[i]=0;
	}
	
	// keys size array
	int keySizes;
	cin>>keySizes;
	int sum=0;
	int key[keySizes];
	for(int i=0;i<keySizes;i++){
		cin>>key[i];
		sum+=key[i];
	}
	cout<<sum<<" "<<n<<endl;
	// check 1
	if(sum<n){
		cout<<"-1";
		return 0;
	}
	
	sort(freq,freq+n,greater<int>());
	int j=0,k=0;
	for(int i=0;i<n;i++){
		if(j%keySizes==0){
			k++;
		}
		if(key[j%keySizes]>0){
			key[j%keySizes]-=1;
			strokes[i]=k;
			j++;
		}else{
			j++;
		}
	}
	int total=0;
	for(int i=0;i<n;i++){
		total+=(freq[i]*strokes[i]);
	}
	cout<<total;
	return 0;
}