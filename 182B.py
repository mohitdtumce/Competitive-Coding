d = int(input())
n = int(input())
count = 0
a = list(map(int, input().split()))
for i in range(n-1):
	count += (d - a[i])
print(count)