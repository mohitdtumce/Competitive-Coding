n = int(input())
maxSize = 0
currSize = 0
for i in range(n):
	a, b = map(int, input().split())
	currSize += (b - a)
	if maxSize < currSize:
		maxSize = currSize

print(maxSize)
