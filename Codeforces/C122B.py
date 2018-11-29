test = input()
a = test.count('4')
b = test.count('7')
if(a == 0 and b == 0):
	print("-1")
else:
	if(a >= b):
		print("4")
	else:
		print("7")
