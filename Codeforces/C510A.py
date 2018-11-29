n, m = map(int, input().split())
for i in range(1,n+1):
	if(i%2 == 1):
		print("#"*m)
	else:
		if((i/2)%2 == 1):
			print("."*(m-1),"#", sep = '')
		else:
			print("#","."*(m-1), sep = '')
