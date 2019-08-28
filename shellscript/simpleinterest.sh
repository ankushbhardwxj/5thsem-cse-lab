echo "enter amount"
read p
echo "enter rate"
read r
echo "enter time"
read t

k='expr $p'
s='expr $p \* $r \* $t'
a='expr $s/100'
echo "Simple Interest is $a"
