test = input()
a = set()
for i in range(len(test)):
	if(test[i] >= 'a' and test[i] <= 'z'):
		a.add(test[i])
print(len(a))