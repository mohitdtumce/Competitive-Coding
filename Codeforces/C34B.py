n, m = map(int, input().split())
price = list(map(int, input().split()))
price.sort()
earn = 0
count = 0
for i in range(n):
	if(price[i] < 0 and count < m):
		earn += abs(price[i])
		count += 1
print(earn)
