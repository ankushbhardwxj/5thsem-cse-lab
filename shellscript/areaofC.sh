read -p "Enter radius" r

#below code looks like shit
ar2=`expr $r \* $r \* 22`
ar2=`expr $ar2 / 7`
#this can be written as 
ar=$(( (22 / 7) * $r * $r ))
#only problem is that it gives wrong answer , lol 
echo $ar $ar2
