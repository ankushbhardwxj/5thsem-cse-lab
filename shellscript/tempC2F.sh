read t
# f=`expr $t \* 9`
# f=`expr $t / 5`
# f=`expr $f + 32`
f=$((( $t * 9 / 5 ) + 32))
echo $f
