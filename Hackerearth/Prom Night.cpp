#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int T,M,N,temp;
    cin>>T>>M>>N;
    vector<int> boy;
    vector<int> girl;
    while(T--){
	    for(int i=0;i<M;i++){
	    	cin>>temp;
	    	boy.push_back(temp);
	    }
	    for(int j=0;j<N;j++){
	    	cin>>temp;
	    	girl.push_back(temp);
	    }
	    int i=0,j=0,res=0;
	    if(N<M){
	    	cout<<"NO\n";

	    }else{
	    	sort(boy.begin(),boy.end());
	    	sort(girl.begin(),girl.end());
	    	for(int i=0;i<M;i++){
	    		if(boy[i]<=girl[i]){
	    			cout<<"NO\n";
	    			res=1;
	    			break;
	    		}
	    	}
	    	if(!res){
	    		cout<<"YES\n";
	    	}
		    
	    }
	    
    }
    return 0;
}
