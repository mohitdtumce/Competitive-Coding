#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    long int array[n];
    int min = 1;
    int count = 1;
    cin>>array[0];
    for(int i=1;i<n;i++){
        cin>>array[i];
        if(array[i-1] <= array[i]){
            count ++;
        }else{
            count = 1;
        }

        if(min < count){
            min = count;
        }
    }

    cout<<min;
}