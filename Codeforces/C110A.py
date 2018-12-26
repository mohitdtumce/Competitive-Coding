n = int(input())
count = 0
while (n > 0):
	if(n % 10 == 4 or n % 10 == 7):
		count += 1
	n //= 10
if(count == 4 or count == 7):
	print("YES")
else:
	print("NO")
