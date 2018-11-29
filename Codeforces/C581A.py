a, b = map(int, input().split())
sum = min(a, b)
a = a - sum
b = b - sum
k = int((a+b)/2)
print(sum, k) 