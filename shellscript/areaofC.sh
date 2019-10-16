read -p "Enter radius" r
ar=$(( (22 / 7) * $r * $r ))
ar2=`expr $r \* $r \* 22`
ar2=`expr $ar2 / 7`
echo $ar $ar2
