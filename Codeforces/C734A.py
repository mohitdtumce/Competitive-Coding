T = int(input())
test= input()
A = test.count('A')
if(A > T-A):
	print( "Anton")
elif (A == T-A):
	print("Friendship")
else:
	print("Danik") 