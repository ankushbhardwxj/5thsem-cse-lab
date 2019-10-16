read n
if [ `expr $n % 4` -eq 0 -a `expr $n % 100` -eq 0 -a `expr $n % 400` -eq 0 ]
then echo "LEAP YEAR"
elif [ `expr $n % 4` -eq 0 -a `expr $n % 100` -ne 0 ]
then echo "LEAP YEAR"
else echo "NOT LEAP YEAR"
fi
