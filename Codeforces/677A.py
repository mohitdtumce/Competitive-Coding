n, h = map(int, input().split())
row = list(map(int, input().split()))
count = 0
for i in range(n):
	count += 1
	if(row[i] > h):
		count += 1
print(count)
