def gcd(a, b):
	if (a > b):
		return gcd(b, a)
	if(a == 0):
		return b
	else:
		return gcd(b%a, a)
a, b, n = map(int, input().split())
while (1):
	p = gcd(a,n)
	if(n == 0 or p > n):
		print("1")
		break
	else:
		n = n - p

	q = gcd(b,n)
	if(n == 0 or q > n):
		print("0")
		break
	else:
		n = n - q
