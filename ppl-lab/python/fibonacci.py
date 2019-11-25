def fib(n):
	if n==0: return 0
	if n==1: return 1
	return fib(n-1) + fib(n-2)

num = int(input())
for i in range(1,num+1):
	print(fib(i))
