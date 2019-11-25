# 1^2 + 2^2 + 3^2 .... n^2
n = int(input())
mpy = 0
for i in range(1,n+1,1):
	mpy += (i*i)

print(mpy)
