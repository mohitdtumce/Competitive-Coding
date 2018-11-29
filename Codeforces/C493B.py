n = int(input())
netSum = 0
lastChop = "first"
first = list()
second = list()
for i in range(n):
	temp = int(input())
	if(temp > 0):
		netSum += temp
		first.append(temp)
	else:
		netSum += temp
		if i == n-1:
			lastChop = "second"
		temp = temp*(-1)
		second.append(temp)

if netSum < 0:
	print("second")
elif netSum > 0:
	print("first")
else:
	i = 0
	j = 0

	while i < len(first) and j < len(second) and first[i] == second[j]:
		i += 1
		j += 1
	if(i == len(first) and j == len(second)):
		print(lastChop)
	elif(i < len(first) and j == len(second)):
		print("first")
	elif(i == len(first) and j < len(second)):
		print("second")
	else:
		if(first[i] < second[j]):
			print("second")
		else:
			print("first")