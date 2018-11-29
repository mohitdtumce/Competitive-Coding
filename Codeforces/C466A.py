import math
n, m, a, b = map(int, input().split())
print(min(n*a,min((math.ceil(n/m)*b,(math.floor(n/m)*b + (n%m)*a)))))