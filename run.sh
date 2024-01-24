#!/bin/bash

gcc -g -Wall -Wextra -Werror -Wpedantic -o executable main.c -L. -lpush_swap

case $1 in
	"m")
		leaks -atExit -- ./executable
		;;
	"M")
		valgrind --leak-check=full ./executable
		;;
	*)
		./executable
		;;
esac
