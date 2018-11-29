n = int(input())
cubes = 0
level = 0
while cubes <= n:
	n -= cubes
	level += 1
	cubes = (level*(level+1))/2
print(level)