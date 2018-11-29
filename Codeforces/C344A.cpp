#include <iostream>
#include<string>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    int temp1,temp2,count=1;
    cin>>temp1;
    for(int i=1;i<n;i++){
        cin>>temp2;
        if(temp1 == temp2){
            continue;
        }else{
            count++;
            temp1 = temp2;
        }


    }
    cout<<count;
    return 0;
}