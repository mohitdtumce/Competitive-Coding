import math
def isPrime(n):
	if(n == 1):
		return False;
	k = math.floor(math.sqrt(n)) 
	for i in range(2,k+1):
		if(n%i == 0):
			return False
	return True

n = int(input())
arr = list(map(int, input().split()))
for i in range(n):
	k = math.floor(math.sqrt(arr[i]))
	if(k*k == arr[i] and isPrime(k)):
		print("YES")
	else:
		print("NO")

