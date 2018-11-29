n = int(input())
arr = list(map(int, input().split()))
taxicount = arr.count(4)
count1 = arr.count(1)
count2 = arr.count(2)
count3 = arr.count(3)

taxicount += count3
count1 = max(0, count1 - count3)

taxicount += int(count2/2)
count2 %= 2

if count2 == 1:
	taxicount += 1
	count1 = max(0, count1 - 2)

taxicount += int(count1/4)
count1 %= 4
if (count1):
	taxicount += 1

print(taxicount)


