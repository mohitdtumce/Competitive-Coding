#include <iostream>
#include <algorithm>
using namespace std;

bool findPair(int arr[],int low,int high,int x){
    while(low<high){
        if(arr[low]+arr[high] == x){
            return true;
        }else if(arr[low]+arr[high] < x){
            low++;
        }else{
            high--;
        }
    }
    return false;
}
bool findTriplets(int arr[], int n)
{ 
    //Your code here
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        if(findPair(arr,0,i-1,-arr[i])){
            return true;
        }
    }
    return false;
}
int main(){
    return 0;
}