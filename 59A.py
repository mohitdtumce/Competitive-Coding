n = list(input())
low = 0
high = 0
for i in n:
	if i.islower():
		low += 1
	else:
		high += 1
if(low >= high):
	for i in range(len(n)):
		n[i] = n[i].lower()
		print(n[i], end = '')
else:
	for i in range(len(n)):
		n[i] = n[i].upper()
		print(n[i], end = '')