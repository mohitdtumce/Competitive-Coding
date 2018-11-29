n, m = map(int, input().split())
hashmap = dict()
for i in range(m):
	str1, str2 = input().split()
	if(len(str1) <= len(str2)):
		hashmap[str1] = str1
	else:
		hashmap[str1] = str2
temp = list(input().split())
res = ""
for i in range(n):
	res += (hashmap[temp[i]] + " ")
print(res)
