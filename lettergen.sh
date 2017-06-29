#!/bin/sh

DIR=alphabet
VAR="a"

while [ 1 ] ; do
	echo "$VAR -> \c"
	VAR=$(echo $VAR | tr "a-z" "a-z_")
	echo "$VAR"
	sleep .1
done
