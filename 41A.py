a = list(input())
b = list(input())

len1 = len(a)
len2 = len(b)
if(len1 != len2):
	print("NO")
else:
	flag = True
	for i in range(len1):
		if(a[i] != b[len1 - 1 - i]):
			flag = False
			break
	if(flag):
		print("YES")
	else:
		print("NO")