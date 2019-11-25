echo "***************"
echo "1.Addition1"
echo "2.Subtraction"
echo "3.Division"
echo "**************"
echo "Enter your choice: "
read ch
case $ch in
1) echo "enter the two number"
	read a
	read b
	c=`expr $a + $b`
	echo "SUM : $c"
	;;
2) echo "enter the two number"
	read a
	read b
	c=`expr $a - $b`
	echo "Subtraction: $c"
	;;
3) echo "enter the two number"
	read a
	read b
	c=`expr $a / $b`
	echo "Division: $c"
	;;
esac
