#!/bin/bash

gcc -g -Wall -Wextra -Werror -Wpedantic -o executable ./*.c -L../ -lpush_swap

case $1 in
	"m")
		leaks -atExit -- ./executable $2
		;;
	"M")
		valgrind --leak-check=full ./executable $2
		;;
	"s")
		./executable $1 > output.txt
		;;
	*)
		./executable $1
		;;
esac
