n, k = map(int, input().split())
arr = list(map(int, input().split()))
arr.sort()
scoreKth =  arr[n-k]
count = 0
for i in arr:
	if scoreKth <= i and i > 0:
		count += 1
print(count)
