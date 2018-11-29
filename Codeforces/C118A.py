test = input()
test = test.lower()
res = ""
vowel = ['a', 'e', 'i', 'o', 'u', 'y']
for i in test:
	if i not in vowel:
		res += '.' + i
print(res)
