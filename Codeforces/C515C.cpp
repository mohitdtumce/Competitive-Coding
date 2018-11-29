#include <iostream>
#include <climits>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

void bubbleSort(char* str){
    int n = strlen(str);
    for(int i = 0; i < n ; i++){
        for(int j=0 ;j < n-i-1; j++){
            if((int)str[j] < (int)str[j+1]){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}
int main(){
    int n,temp;
    cin>>n;
    long long val;
    cin>>val;
    string str ="";
    for(int i=0;i<=n;i++){
        temp = val%10;
        switch(temp){
            case 2:
                    str+="2";
                    break;
            case 3:
                    str+="3";
                    break;
            case 4:
                    str+="322";
                    break;
            case 5:
                    str+="5";
                    break;
            case 6:
                    str+="53";
                    break;
            case 7:
                    str+="7";
                    break;
            case 8:
                    str+="7222";
                    break;
            case 9:
                    str+="7332";
                    break;
            default: 
                    break;
        }
        val = val/10;
    }
    char* array = (char*)(str.c_str());
    bubbleSort(array);
    cout<<str;
    return 0;
}