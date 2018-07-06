hashtable = [0]*26
a = list(input())
for i in a: 
	hashtable[ord(i) - 65] += 1
b = list(input())
for j in b:
	hashtable[ord(j) - 65] += 1
c = list(input())
for k in c:
	hashtable[ord(k) - 65] -= 1
flag = True
for i in range(26):
	if(hashtable[i] != 0):
		flag = False
		break	
if(flag):
	print("YES")
else:
	print("NO")