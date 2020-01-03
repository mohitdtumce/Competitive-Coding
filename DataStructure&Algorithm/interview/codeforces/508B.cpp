#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    string s;
    cin>>s;
    // finding the count of even numbers
    int count = 0,i,len= s.length();
    for(i=0;i<len;i++){
        if((s[i] -'0')%2==0){
            count++;
        }
    }
    if(count==0){
        cout<<"-1";
        return 0;
    }
    char temp;
    for(i=0;i<len-1;i++){
        if((s[i]-'0')%2==0){
            if(count==1){
                temp = s[i];
                s[i]=s[len-1];
                s[len-1] = temp;
                break;
            }else{
               count--;
               if(s[i] < s[len-1]){
                   temp = s[i];
                   s[i]=s[len-1];
                   s[len-1] = temp;
                   break;
                }

            }
        }
    }
    cout<<s;
    return 0;
}