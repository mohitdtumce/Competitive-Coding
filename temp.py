x = int(input())
y = set(map(int,input().split()))
z = set(map(int,input().split()))

ab = y.union(z)
if len(ab) == x :
 print("I become the guy.")
else:
 print("Oh, my keyboard!")