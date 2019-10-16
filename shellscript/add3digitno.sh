read a
n1=`expr $a % 10`
a=`expr $a / 10`
n2=`expr $a % 10`
a=`expr $a / 10`
n3=`expr $a % 10`
sum=`expr $n1 + $n2 + $n3`
echo "$sum"
