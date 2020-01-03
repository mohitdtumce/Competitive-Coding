#include<iostream>
#include<string>
using namespace std;
int main(){

    string first,second, result;
    cin>>first;
    cin>>second;
    for(int i=first.length()-1;i>=0;i--){
        int firstval = first.at(i) - '0';
        int secondval = second.at(i)- '0';

        int sum = (firstval ^ secondval) +'0';
        result = char(sum) + result;
    }
    cout<<result;
    return 0;
}