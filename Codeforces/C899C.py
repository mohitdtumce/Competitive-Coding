n = int(input())
sumV = int((n*(n+1))/4);
#print(sumV)
if(n%4 == 1 or n%4 == 2):
	print("1")
else:
	print("0")

arr = list()
while sumV > 0:
	if sumV > n:
		arr.append(n)
		sumV -= n
		n -= 1
	else:
		arr.append(sumV)
		sumV = 0

print(len(arr), end = " ")
for i in range(len(arr)):
	print(arr[i], end = " ")