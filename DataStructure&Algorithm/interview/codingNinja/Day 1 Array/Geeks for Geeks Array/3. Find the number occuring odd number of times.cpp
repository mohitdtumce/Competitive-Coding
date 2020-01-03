/*3. 
 Given an array of positive integers. 
 All numbers occur even number of times except one number which occurs odd number of times. 
 Find the number in O(n) time & constant space.
*/
#include<iostream>
using namespace std;
int main()
{
	int A[]={2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};;
	int n= sizeof(A)/sizeof(A[0]);
	int res=0;
	for(int i=0;i<n;i++){
		res= res^A[i];
	}
	std::cout<<res;
	return 0;
}
