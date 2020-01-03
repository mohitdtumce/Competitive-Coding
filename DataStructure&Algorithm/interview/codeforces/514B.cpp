#include<bits/stdc++.h>
using namespace std;

void odd(int arr1[],int arr2[],int n){
  //Searching the odd one out
  int flag=0;
  for(int i=0;i<n-1;i++){
        if(arr1[i]!=arr2[i]){
            flag=1;
            printf("%d\n",arr1[i]);
            break;
        }
  }
  if(flag==0){
      printf("%d\n",arr1[n-1]);
   }
}

int main(){
	int n;
	scanf("%d",&n);
	int ef[n],es[n-1],et[n-2];

	for(int i=0;i<n;i++){
	    scanf("%d",&ef[i]);
	}
	sort(ef,ef+n);

	for(int i=0;i<n-1;i++){
	    scanf("%d",&es[i]);
	}
	sort(es,es+n-1);

	for(int i=0;i<n-2;i++){
		scanf("%d",&et[i]);
	}
	sort(et,et+n-2);

	odd(ef,es,n);
	odd(es,et,n-1);
	return 0;
}