n = int(input())
arr = list(map(int, input().split()))

maxLen = 1
currLen = 1
for i in range(n-1):
	if arr[i+1] >= arr[i]:
		currLen += 1
		maxLen = max(maxLen, currLen)
	else:
		currLen = 1
print(maxLen)