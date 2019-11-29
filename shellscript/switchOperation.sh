echo "******"
echo "1.Add"
echo "2.Sub"
echo "3.Mpy"
echo "******"
echo "enter ur choice"
read ch
case $ch in 
1) read a 
    read b
    sum=`expr $a + $b`
    echo $sum
    ;;
2) read a 
    read b
    sub=`expr $a - $b`
    echo $sub
    ;;
3) read a
    read b
    mpy=`expr $a \* $b`
    echo $mpy
    ;;
*) echo "Wrong choice"
;;
esac