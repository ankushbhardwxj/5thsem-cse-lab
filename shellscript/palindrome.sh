read n
temp=$n
while [ $n -gt 0 ]
do
  sd=$(( $n % 10 ))
  n=$(( $n / 10 ))
  rev=$( echo ${rev}${sd} )
  #this could be an option but not the only one
  # rev = `expr $rev \* 10 + $sd` is also a good thing to do
done

if [ $temp -eq $rev ]
then echo "PALINDROME"
else echo "NOT PALINDROME"
fi
