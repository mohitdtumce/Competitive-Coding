n, m, k = map(int, input().split())
arr = list()
for i in range(m):
	temp = int(input())
	arr.append(temp)
fedor = int(input())
count = 0
for i in range(m):
	temp = fedor
	sumV = bin(arr[i] ^ temp).count('1')
	if(sumV <= k):
		count += 1
print(count)