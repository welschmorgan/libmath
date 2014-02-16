#!/bin/bash

TESTS=ftoa

function make_iter {
	for test in $TESTS; do
		printf "\r\033[K[%s]:\n\t" $1
		make $1 -s -C $test
		printf "[done]\n" " "
	done
}

if [ "$1" == "all" ]; then
	make_iter all
elif [ "$1" == "clean" ]; then
	make_iter clean
elif [ "$1" == "fclean" ]; then
	make_iter fclean
elif [ "$1" == "re" ]; then
	make_iter re
elif [ "$1" == "install" ]; then
	make_iter install
elif [ "$1" == "run" ]; then
	make_iter run
else
	echo "Unknown command !"
	exit 1
fi
