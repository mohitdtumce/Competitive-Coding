n = int(input())
res = ""
for i in range(n):
	res += input()

group = 1
group += res.count("00")
group += res.count("11")
print(group)