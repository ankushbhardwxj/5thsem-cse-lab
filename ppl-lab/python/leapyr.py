# program to check for leap year
year = int(input())
def leap_year(n):
	if n%4==0 and n%100==0 and n%400==0 :
		print("Leap year")
	elif n%4==0 and n%100!=0 :
		print("Leap year")
	else:
		print "Not Leap year"


leap_year(year)
