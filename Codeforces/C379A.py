a, b = map(int, input().split())
hour = 0
while a > 0:
	hour += 1
	a -= 1
	if hour % b == 0:
		a += 1
print(hour)