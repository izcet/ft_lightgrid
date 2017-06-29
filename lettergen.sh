#!/bin/sh

DIR=alphabet

function handle_letter() {
	letter=$1
	file="letter_$letter.c"
	width=$(head -1 $DIR/$letter)
	length=8
	w=0;
	l=0;

	echo "starting letter $letter"

	echo "#include \"trash_grid.h\"\n" >> $file
	echo "void\tletter_$letter(t_letter **l)\n{" >> $file
	echo "\tint\t\tetter;" >> $file
	echo "\tint\t\ti;" >> $file
	echo "" >> $file
	echo "\tetter = letter_pos('$letter');" >> $file
	echo "\tl[etter] = (t_letter*)malloc(sizeof(t_letter));" >> $file
	echo "\tl[etter]->width = $width;" >> $file
	echo "\tl[etter]->dots = (char**)malloc(sizeof(char*) * $length);" >> $file
	while [ "$l" -lt "$length" ] ; do
		echo "\tl[etter]->dots[$l] = ft_strnew($width + 1);" >> $file
		line="$(head -$(($l + 1)) $DIR/$letter | tail -n 1)"
		echo "\tft_memcpy(l[etter]->dots[$l], \"$line\", $width);" >> $file
		l=$(($l + 1))
	done
	echo "}" >> $file


	echo "void\t\t\tletter_${letter}(t_letter **l);" >> trash_grid.h
	sleep .1
}

VAR="A" #_
while [ "$VAR" != "_" ] ; do
	handle_letter $VAR
	VAR=$(echo $VAR | tr "0-9A-Z" "1-9A-Z_")
done

VAR="a" #_
while [ "$VAR" != "_" ] ; do
	handle_letter $VAR
	VAR=$(echo $VAR | tr "0-9a-z" "1-9a-z_")
done
