a = int(input())
b = int(input())
def swap(a,b):
	print("Swapped")
	temp = b
	b = a
	a = temp
	print a,b

swap(a,b)
