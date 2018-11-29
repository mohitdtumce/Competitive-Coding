k = list(map(int,input().split()))
print(max(0, int(k[0]*((k[2]*(k[2]+1))/2) - k[1])))