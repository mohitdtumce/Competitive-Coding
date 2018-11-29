#include<bits/stdc++.h>
using namespace std;
int n,a[100005],s,f[100005],ans,o;
std::map<char,int> m;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char cc;
        scanf(" %c",&cc);
        if(m[cc]){
        	a[i]=m[cc];
        }else{
        	m[cc]=++s,a[i]=s;	
        } 
    }                  
    ans=n;
    int k=0;
    for(int i=1;i<=n;i++){
        while(k<n&&o<s){
            k++;
            if(!f[a[k]])o++;
            f[a[k]]++;
        }
        if(o<s) break;
        ans=min(ans,k-i+1);
        if(f[a[i]]==1)o--;
        f[a[i]]--;
    }
    printf("%d\n",ans);
	return 0;
}