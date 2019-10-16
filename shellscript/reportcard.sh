read m1 m2 m3 m4 m5
sum=`expr $m1 + $m2 + $m3 + $m4 + $m5`
sum=`expr $sum / 5`
echo $sum
if [ $sum -ge 95 ]
then echo "outstanding"
elif [ $sum -ge 70 ]
then echo "excellent"
elif [ $sum -ge 50 ]
then echo "average"
else echo "study again"
fi
