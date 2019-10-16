read p
read r
read t
m=`expr $p \* $r \* $t`
m=`expr $m / 100`
echo "$m"
