read p
read r 
read t
#whats this bc and echo shit ?
#bc is something called basic calc which uses following syntax
#we can also use `expr` instead of `bc`
p=`echo "scale=4; 1 + $p"|bc`
n=`echo "scale=4; 1 + $p"|bc`
m=`echo "scale=4; $n ^ $t"|bc`
q=`echo "scale=4; $p + $m"|bc`
z=`echo "scale=4; $q - $p"|bc`
echo $z
