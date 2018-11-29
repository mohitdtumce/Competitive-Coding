n = int(input())
x = list()
y = list()
home = list()
away = list()
cnt =  [0]*100001
for i in range(n):
	xi, yi = map(int, input().split())
	x.append(xi)
	y.append(yi)
	cnt[xi] += 1

for i in range(n):
	temp = cnt[y[i]]
	home.append(n - 1 + temp)
	away.append(n - 1 - temp)
for i in range(n):
	print(home[i],away[i])