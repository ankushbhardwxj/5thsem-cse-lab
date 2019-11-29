while : #remember this for infinite loop
do 
echo "1.add"
echo "2.sub"
echo "3.exit"
echo "enter choice"
read c
case $c in 
1) echo "Enter two number:"
    read a 
    read b
    sum=`expr $a + $b`
    echo $sum
    echo "press enter to continue" 
    read Enterkey
    ;;
2) echo "Enter two number:"
    read a 
    read b
    s=`expr $a - $b`
    echo $s
    echo "press enter to continue" 
    read Enterkey
    ;;
3) echo "Goodbye!try next"
    exit 0
    ;;
*) echo "wrong choice"
read Enterkey
esac
done
