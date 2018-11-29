n, l = map(int, input().split())
loc =  list(map(int, input().split()))
loc.sort()
maxd = 0
if(loc[0] != 0):
	maxd = max(maxd, 2*loc[0])

if(loc[-1] != l):
	maxd = max(maxd, 2*(l - loc[-1]))

for i in range(n-1):
	maxd = max(maxd, (loc[i+1] - loc[i]))
print(maxd/2)