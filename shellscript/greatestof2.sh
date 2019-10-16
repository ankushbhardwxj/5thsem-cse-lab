read a
read b
if [ $a -gt $b ]
then echo "$a is great"
elif [ $a -eq $b ]
then echo "they are equal"
else
  echo "$b is great"
fi
