echo "enter first number:"
read a
echo "enter second number:"
read b
if [ $a -gt $b ]
then
  echo "a is greatest"
else
  echo "b is greatest"
fi
