n = input()
unique = []

for i in n:
	if i not in unique:
		unique.append(i)

if len(unique)%2:
	print( "IGNORE HIM!")
else:
	print("CHAT WITH HER!")