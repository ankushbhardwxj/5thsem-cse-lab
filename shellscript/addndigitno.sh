read a 
num=$a
sum=0
while [ $a -gt 0 ]
do 
    temp=`expr $a % 10`
    sum=`expr $sum + $temp`
    a=`expr $a / 10`
done
echo $sum