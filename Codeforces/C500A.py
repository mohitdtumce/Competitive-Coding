n, t = map(int, input().split())
arr = list(map(int, input().split()))
index = 1
while index < t:
	index = index + arr[index-1]
if index == t:
	print("YES")
else:
	print("NO")