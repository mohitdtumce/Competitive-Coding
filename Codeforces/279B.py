n, t = map(int, input().split())
a = list(map(int, input().split()))

maxCount = 0
for i in range(n):
	totalMin = 0
	count = 0
	for j in range(i,n):
		if totalMin + a[j] <= t:
			totalMin += a[j]
			count += 1
			maxCount = max(count, maxCount)
		else:
			break

print(maxCount)
