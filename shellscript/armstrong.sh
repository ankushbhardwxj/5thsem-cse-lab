echo "enter size of number"
read n
echo "enter number"
read num
temp=$num
i=1
sum=1
while [ $i -le $n ]
do
  j=1
  ans=1
  t=`expr $num % 10`
  while [ $j -le $n ]
  do
    j=`expr $j + 1`
    ans=`expr $ans \* $t`
  done
  num=`expr $num / 10`
  sum=`expr $sum + $ans`
  i=`expr $i + 1`
done
if [ `expr $sum - 1` -eq $temp ]
then echo "ARMSTRONG"
else echo "NOT ARMSTRONG"
fi
