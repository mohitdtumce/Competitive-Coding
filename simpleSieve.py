#simple sieve
# it is not cache friendly. memory overflow when n becomes large
def sieve(n):
	prime = [True]*(n+1)
	p = 2
	while p*p <= n:
		if prime[p] == True:
			i = 2*p
			while i <= n:
				prime[i] = False
				i += p
		p += 1
	p = 2
	while p <= n:
		if prime[p] == True:
			print(p, end = ' ')
		p += 1

sieve(50)