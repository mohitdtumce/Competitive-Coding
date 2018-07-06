val = 0
for i in range(5):
	n = list(map(int, input().split()))
	if 1 in n:
		val += abs(n.index(1) - 2)
		val += abs(i - 2)
print(val)

