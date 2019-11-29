#Algorithm
# greatest = max (a,b,c)
# if (a == greatest)
#   max (b,c) is secondgreat
# elif (b == greatest)
#   max (a,b) is second great
# else 
#   max (a,c) is second great

read a b c
greatest=0
if [ $a -gt $b -a $a -gt $c ]
then greatest=$a
elif [ $b -gt $c -a $b -gt $a ]
then greatest=$b
elif [ $c -gt $a -a $c -gt $b ]
then greatest=$c
else echo
fi


if [ $a -eq $greatest ]
then if [ $b -gt $c ]
    then echo "$b is second largest"
    else echo "$c is second largest"
    fi
elif [ $b -eq $greatest ]
then if [ $a -gt $c ]
    then echo "$a is second largest"
    else echo "$c is second largest"
    fi
elif [ $c -eq $greatest ]
then if [ $a -gt $b ]
      then echo "$a is second largest"
      else echo "$b is second largest"
      fi
else echo
fi
