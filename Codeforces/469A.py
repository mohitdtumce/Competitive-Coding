n = int(input())
p = list(map(int, input().split()))
q = list(map(int, input().split()))

res = list(set(p[1:]) | set(q[1:]))
if(len(res) == n):
	print( "I become the guy.")
else:
	print("Oh, my keyboard!")