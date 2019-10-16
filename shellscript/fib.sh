read n
x=0
y=1
echo $x
echo $y
i=2
while [ $i -lt $n ]
do
  fib=`expr $x + $y`
  echo $fib
  x=$y
  y=$fib
  i=`expr $i + 1`
done
