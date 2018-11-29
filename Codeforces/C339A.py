test = input()
count1 = 0
count2 = 0 
count3 = 0
countplus = 0
for i in test:
	if i == '1':
		count1 += 1
	elif i == '2':
		count2 += 1
	elif i == '3':
		count3 += 1
	else:
		countplus += 1
res = ""
for i in range(count1):
	res += '1'
	if countplus > 0:
		res += '+'
		countplus -= 1

for i in range(count2):
	res += '2'
	if countplus > 0:
		res += '+'
		countplus -= 1

for i in range(count3):
	res += '3'
	if countplus > 0:
		res += '+'
		countplus -= 1

print(res)
