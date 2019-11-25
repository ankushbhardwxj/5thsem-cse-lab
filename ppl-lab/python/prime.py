def check_prime(n):
	for i in range(2,(n/2)+1,1):
		if(n%i == 0):
			return 'true'

num = input()
if(check_prime(num)): print "not prime"
else: print "prime"
