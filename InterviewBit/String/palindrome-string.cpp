#include <bits/stdc++.h>
using namespace std;

bool isAlphabet(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return true;
    
    if (ch >= 'a' && ch <= 'z')
        return true;
    
    return false;
}

bool isNumber(char ch) {
    if (ch >= '0' && ch <= '9')
        return true;
    
    return false;
}
bool isAlphanumeric(char ch) {  
    return (isAlphabet(ch) || isNumber(ch));
}

int isPalindrome(string str) {
    int len = str.size();
    int i = 0, j;
    for (; i < len; i++) {
        if(isAlphabet(str[i])) 
            str[i] = tolower(str[i]);
    }
    
    i = 0;
    j = len-1;
    while (i < j) {
        while(i < j && !isAlphanumeric(str[i])) {
            i++;
        }
        
        while(i < j && !isAlphanumeric(str[j])) {
            j--;
        }
        
        if (i < j && str[i] != str[j]) {
            return false;
        } else {
            i++;
            j--;
        }
    }
    return true;
}


int main() {
    return 0;
}
