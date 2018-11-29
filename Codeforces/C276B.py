test = input()
hashtable = [0]*26;
for i in range (len(test)):
	hashtable[ord(test[i]) - ord('a')] += 1

odd = 0
for i in range(26):
	if hashtable[i]%2 == 1:
		odd += 1

if odd == 0 or odd % 2 == 1:
	print("First")
else:
	print("Second")
