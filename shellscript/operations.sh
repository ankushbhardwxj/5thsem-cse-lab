read a
read b
add=`expr $a + $b`
sub=`expr $a - $b`
mpy=$(($a * $b))
mpy2=`expr $a \* $b`
echo "$add $sub $mpy $mpy2"
