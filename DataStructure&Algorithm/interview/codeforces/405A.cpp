#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    sort(array,array+n);
    for(int i=0;i<n;i++){
        if(i != n-1 ){
           cout<<array[i]<<" ";
        }else{
            cout<<array[i];
        }

    }
}