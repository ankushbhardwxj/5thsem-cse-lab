read n
i=1
while [ $i -le 10 ]
do
  mpy=`expr $n \* $i`
  echo "$n * $i = $mpy"
  i=`expr $i + 1`
done
