n = int(input())
arr = list(map(int, input().split()))

if n == 1:
	print("1")
elif n == 2:
	print("2")
else:
	i = 0
	j = 0
	curr = 0
	maxCurr = 2
	while(i < n and j < n-2):
		if(arr[j] + arr[j+1] == arr[j+2]):
			curr = j - i + 3
			maxCurr = max(maxCurr, curr)
		else:
			i = j + 1; 
		j += 1
	print(maxCurr)



