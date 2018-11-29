#find if there are thre consecutive numbers or not
n, m = map(int, input().split())

if m != 0:
	arr = list(map(int, input().split()))
	arr.sort()

if m == 0:
	print("YES")
elif m == 1:
	if arr[0] == 1 or arr[0] == n:
		print("NO")
	else:
		print("YES")
elif m == 2:
	if arr[0] == 1 or arr[m-1] == n:
		print("NO")
	else:
		print("YES")
else:
	if arr[0] == 1 or arr[m-1] == n:
		print("NO")
	else:
		for i in range(m-2):
			areConsecutive =  False
			if arr[i] + 1 == arr[i+1] and arr[i+1] + 1 == arr[i+2]:
				areConsecutive = True
				break
		if(areConsecutive == True):
			print("NO")
		else:
			print("YES")

