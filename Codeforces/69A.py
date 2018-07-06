n = int(input())
countx = 0
county = 0
countz = 0
for i in range(n):
	x, y, z = map(int, input().split())
	countx += x;
	county += y;
	countz += z;

if (countx == 0 and county == 0 and countz == 0):
	print("YES")
else:
	print("NO")
