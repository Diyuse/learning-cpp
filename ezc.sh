#!/bin/bash

if [ ! -d ./build ]
then
	mkdir ./build
fi

cd ./build

# List of all cpp file names.
files=('basics' 'strings' 'conditionals' 'pointers' 'loops' 'functions' 
	'exceptions' 'abstractClasses' 'structs' 'operatorOverloading'
	'lambdas' 'iostreams' 'macros' 'templates' 'containers' 'memory')

# List for projects with multiple files.
mFiles=('mf=("classes" "Shape" "Circle")' 
	'mf=()')

# Filter commands.
case "$1" in
	p)
		input="print"
		;;
	c)
		input="count"
		;;
	a)
		input="all"
		;;
	m)
		input="multiple"
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
	print)
		COUNT=0
		while [ $COUNT -lt ${#files[@]} ]; do
			echo $COUNT-${files[$COUNT]}
			let COUNT=$COUNT+1
		done
		;;
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
	multiple)
		eval ${mFiles[$2]}
		echo "Building ${mf[0]}"
		cmand='g++'
		for f in ${mf[@]}; do
			cmand="$cmand ../src/$f.cpp"
		done
		cmand="$cmand ../src/WaitForInput.cpp -o ${mf[0]}"
		$cmand
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
