n, m = map(int, input().split())
if((n-m)%2):
	kmax = int((n-m+1)/2)*(n-m)
else:
	kmax = int((n-m)/2)*(n-m+1)
k = int(n/m)
kmin = int(((n%m)*(k+1)*k)/2)+int(((m- n%m)*k*(k-1))/2)
print(kmin, kmax)