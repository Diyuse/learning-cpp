#!/bin/bash

if [ ! -d ./build ]
then
	mkdir ./build
fi

cd ./build

# List of all cpp file names.
files=("basics" "strings" "conditionals" "pointers"
	"loops" "functions")

# Filter commands.
case "$1" in
	c)
		input="count"
		;;
	a)
		input="all"
		;;
	*)
		if (( $1 >= 0 && $1 <= ${#files[@]} ))
		then
			input=$1
		else
			echo "Incorrect input"
			exit 1
		fi
		;;
esac

# Action given the correct input.
case "$input" in
	count)
		echo "${#files[@]}"
		;;
	all)
		echo "Building all files"
		for f in ${files[@]}; do
			g++ ../src/$f.cpp ../src/WaitForInput.cpp -o $f
		done
		echo "Finished."
		;;
	*)
		file=${files[$input]}
		echo "Building $file"
		g++ ../src/$file.cpp ../src/WaitForInput.cpp -o $file
		echo "Finished."
		;;
esac

exit 0
