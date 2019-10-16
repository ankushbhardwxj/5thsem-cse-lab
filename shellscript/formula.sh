read a b c
s=`expr $b \* $b - 4 \* $a \* $c`
t=`expr 2 \* $a`
echo `expr $s / $t`
