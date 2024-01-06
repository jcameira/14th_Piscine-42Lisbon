#!/bin/sh 
cc="cc"
flags="-c -Wall -Werror -Wextra"
src=*.c
lib_name="libft.a"

$cc $flags $src
ar rc $lib_name *.o
ranlib $lib_name
rm *.o