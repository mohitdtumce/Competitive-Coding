n, t = map(int, input().split())
order = list(input())

for j in range(t):
	i = 0
	while i <= n-2:
		if(order[i] == 'B' and order[i+1] == 'G'):
			order[i] = 'G' 
			order[i+1] = 'B'
			i += 2
		else:
			i += 1

for i in order:
	print(i, end = '')
