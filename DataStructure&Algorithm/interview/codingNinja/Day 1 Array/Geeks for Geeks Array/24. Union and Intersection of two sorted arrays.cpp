/*
	24. Union and Intersection of two sorted arrays	
*/
#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;

void Union(int a[],int na,int b[],int nb){
	int i=0,j=0,temp=INT_MAX;
	while(i<na && j<nb){
		if(a[i]<b[j]){
			if(temp!=a[i])
				cout<<a[i]<<' ';
			temp=a[i];
			i++;
		}else if(a[i]>b[j]){
			if(temp!=b[i])
				cout<<b[j]<<' ';
			temp=b[j];
			j++;
		}else if(a[i]==b[j]){
			if(temp!=a[i])
				cout<<a[i]<<' ';
			temp=a[i];
			j++;
			i++;
		}
	}
	while(i<na){
		if(temp!=a[i])
			cout<<a[i]<<' ';
		temp=a[i];
		i++;
	}
	while(j<nb){
		if(temp!=a[i])
			cout<<b[j]<<' ';
		temp=a[i];
		j++;
	}
	cout<<'\n';
}

void Intersection(int a[],int na,int b[],int nb){
	int i=0,j=0,temp=INT_MAX;
	while(i<na && j<nb){
		if(a[i]<b[j]){
			i++;
		}else if(a[i]>b[j]){
			j++;
		}else if(a[i]==b[j]){
			if(temp!=a[i])
				cout<<a[i]<<' ';
			temp=a[i];
			j++;
			i++;
		}
	}
}

int main(){
	int arr1[] = {1, 2, 2, 4, 5, 6};
	int arr2[] = {2, 3, 5, 7};
	int m = sizeof(arr1)/sizeof(arr1[0]);
	int n = sizeof(arr2)/sizeof(arr2[0]);
	Union(arr1,m, arr2, n);
	Intersection(arr1,m, arr2, n);
	return 0;
}	
