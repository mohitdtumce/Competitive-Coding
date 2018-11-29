import operator
n = int(input())
p = list(map(int, input().split()))

prize = [None]*n
for i in range(n):
	prize[p[i] - 1] = i+1
for x in prize:
	print(x, end = " ")

