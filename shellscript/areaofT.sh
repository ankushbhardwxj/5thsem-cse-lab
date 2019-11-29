#!/bin/bash
read b h
ar=`expr $b \* $h`
ar=`expr $ar / 2`
ar2=`expr $b \* $h / 2`
echo $ar2 $ar $b $h
