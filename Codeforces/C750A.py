import math
n, k = map(int, input().split())
k = 240 - k
i = 1
while k >= 5*i:
	k -= 5*i
	i += 1
print(min(n,i-1))