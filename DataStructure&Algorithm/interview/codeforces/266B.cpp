#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,t;
    string A;
    cin>>n>>t;
    cin>>A;
    while(t--){
        int i=0;
        while(i<(n-1)){
            if(A[i]=='B' && A[i+1]=='G'){
                A[i]= 'G';
                A[i+1]= 'B';
                i+=2;
            }else{
                i++;
            }
        }
    }
    cout<<A;
    return 0;
}