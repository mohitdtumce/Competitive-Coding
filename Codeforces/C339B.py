n, m = map(int, input().split())
task = list(map(int, input().split()))
loc = 1
time = 0
for i in range(m):
	if(loc <= task[i]):
		time += (task[i] - loc)
	else:
		time += (n - (loc - task[i]))
	loc = task[i]
print(time)