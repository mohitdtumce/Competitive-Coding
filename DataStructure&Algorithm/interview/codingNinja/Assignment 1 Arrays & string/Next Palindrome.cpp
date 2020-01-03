#include<bits/stdc++.h>
using namespace std;
int checkgreater(int input[],int output[],int size)
{
	int i;
    for(i=0;i<size;i++)
    {
        if(output[i]>input[i])
        return 1;
        else if(output[i]<input[i])
        return 0;
	
        else;
        
    }
    return 0;
}
int nextPalindrome(int input[], int size, int output[]) 
{
    output[0]=0;
    int i=0;
    int j=size-1;
    for(i=0;i<=j;i++)
    {
        output[i]=input[i];
        output[size-i-1]=input[i];
        j--;
        
    }
    if(checkgreater(input,output,size)==1)
    return size;
    for(i=size-1;i>=0;i--)
    output[i+1]=output[i];
    size++;
    output[0]=0;
    i=1,j=size-1;
    while(i<=j)
    {
        i++;
        j--;
    }
    i--;
    j++;
    
    if(i==j)
    output[j]++;
    else
    {
       
        output[i]++;
    }
  
    int carry=0;
    while(i>=0)
    {
        output[i]+=carry;
        carry=output[i]/10;
        
        output[i]=output[i]%10;
        
        output[j]=output[i];
        j++;
        
        i--;
    }
  
   if(output[0]==0)
    {
        for(i=1;i<size;i++)
        output[i-1]=output[i];
        size--;
        
    }
    else
    {
    	output[size-1]=1;
	}
   
    return size;   
}