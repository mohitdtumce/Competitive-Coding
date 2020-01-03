#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    bool isPrime[1000001];
    isPrime[0]=false;
    isPrime[1]=false;
    
    for(int i=2; i<1000001; i++)
    {
        isPrime[i]=true;
    }
    
    for(int i=2; i<1000001; i++)
    {
        if(isPrime[i]==true)
        {
            for(int j=2; i*j<1000001; j++)
            {
                isPrime[i*j]=false;
            }
        }
    }
    
    int n;
    cin >> n;
    long long int ar[n];
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    
    int number;
    for(int i=0; i<n; i++)
    {
        number = (int)sqrt(ar[i]);
        if( number-sqrt(ar[i])==0)
        {
            if(isPrime[number])
                cout << "YES" << endl;
            else
                cout <<   "NO" << endl;
        }
        else
			cout <<   "NO" << endl;
    }
    return 0;
}