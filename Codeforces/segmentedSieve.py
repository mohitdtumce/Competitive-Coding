import math
def sieve(n):
	prime = list()
	mark = [True]*(n+1)
	p = 2
	while p*p <= n:
		if(mark[p]== True):
			for j in range(2*p,n+1,p):
				mark[j] = False
		p += 1
	for p in range(2,n+1):
		if(mark[p] == True):
			prime.append(p)
	return prime

def segmentedSieve(n):
	limit = math.floor(math.sqrt(n)) + 1
	prime = sieve(limit)
	low = limit
	high = 2*limit 
	for x in prime:
		print(x, end = ' ')
	while low < n:
		mark = [True]*(limit+1)
		for i in range(len(prime)):
			start = math.floor(low/prime[i])*prime[i]
			if(start < low):
				start += prime[i]
			for j in range(start,high,prime[i]):
				mark[j-low] = False

		for i in range(low,high):
			if(mark[i - low] == True):
				print(i, end = " ")

		low += limit
		high += limit
		if high > n:
			high = n

segmentedSieve(100)

