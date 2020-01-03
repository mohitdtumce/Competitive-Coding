#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
bool subArraySum(int arr[], int n, int sum)
{
    int curr_sum = arr[0], start = 0, i;

    for (i = 1; i <= n; i++)
    {
        while (curr_sum > sum && start < i-1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }
        if (curr_sum == sum)
        {
            cout<<(start+1)<<" "<<(i);
            return 1;
        }
        if (i < n)
          curr_sum = curr_sum + arr[i];
    }
    return 0;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,S;
		cin>>N>>S;
		int arr[N];
		for(int i=0;i<N;i++){
			cin>>arr[i];
		}
		if(!subArraySum(arr,N,S)){
			cout<<"-1";
		}
		if(T>0){
			cout<<endl;
		}
	}
	return 0;
}