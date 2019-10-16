read a
read b
a=`expr $a + $b`
b=`expr $a - $b`
a=`expr $a - $b`
echo "$a $b"
