read n
temp=$n
while [ $n -gt 0 ]
do
  sd=$(( $n % 10 ))
  n=$(( $n / 10 ))
  rev=$( echo ${rev}${sd} )
done

if [ $temp -eq $rev ]
then echo "PALINDROME"
else echo "NOT PALINDROME"
fi
