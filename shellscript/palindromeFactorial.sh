echo "1.Factorial"
echo "2.Palindrome"
echo "enter choice"
read c 
case $c in 
1)
echo "Enter number: "
read num
i=1
fac=1 
while [ $i -le $num ]
do 
    fac=`expr $i \* $fac`
    i=`expr $i + 1`
done
echo "factorial of $num is $fac"
;;
2)
echo "Enter number: "
read num
ori=$num
while [ $num -gt 0 ]
do
     temp=`expr $num % 10`
     num=`expr $num / 10`
     rev=`expr $rev \* 10`
     rev=`expr $rev + $temp`
    
done
if [ $rev -eq $ori ] 
then
echo "Palindrome"
else 
echo "Not Palindrome"
fi
;;
*) echo "Wrong choice"
;;
esac