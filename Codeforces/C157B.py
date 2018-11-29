n = int(input())
radius = list(map(int, input().split()))
radius.sort(reverse = True)
area = 0
for i in range(n):
	if i%2 == 0:
		area += (radius[i]*radius[i])
	else:
		area -= (radius[i]*radius[i])
print(area*3.1415926536)